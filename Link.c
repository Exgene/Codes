#include<stdio.h>
#include<stdlib.h>


struct NODE{
    int data;
    struct NODE *next;
};

typedef struct NODE *node;

node head = NULL;

void lastinsert()  
{  
    struct NODE *ptr,*temp;  
    int item;     
    ptr = (struct NODE*)malloc(sizeof(struct NODE));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNODE inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNODE inserted");  
          
        }  
    }  
}  

void firstinsert(){
struct NODE *ptr;
ptr=(struct NODE *)malloc(sizeof(struct NODE));
if(ptr==NULL){
    printf("NO MEMORY");
    exit(0);
}
printf("Enter the number:");
scanf("%d",&ptr->data);
if(head==NULL){
    head=ptr;
    ptr->next=NULL;
    printf("NODE inserted\n");
}
else{
    ptr->next=head;
    head=ptr;
}
}
void display(){
    struct NODE *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Nothing to print");
    }
    else{
    while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->next;
    }
    }
}

void delete(){
    node ptr;
    node prev;

    int num;
    printf("Enter the number to be deleted: ");
    scanf("%d",&num);

    if (head == NULL)
    {
        printf("Nothing to delete\n");
    }
    else
    {
        if(head -> data == num)
        {
            head = head -> next;
            printf("Element was removed\n");
            return;
        }

        prev = head;
        ptr = head -> next;

        while(ptr != NULL)
        {
            if(ptr -> data == num)
            {
                prev -> next = ptr -> next;
                printf("Element was removed\n");
                return;
            }
            ptr = ptr -> next;
            prev = prev -> next;
        }
        printf("\nElement not found\n");
    }
}

/*int delete(node *n, int x)
{
    int count = 0;
    while(*n != NULL)
    {
        if ((*n)->data == x)
        {
            node temp = *n;
            *n = (*n)->next;
            free(temp);
            count++;
        }
        else
        {
            n = &((*n)->next);
        }
    }
    return count;
}
*/

int main(){
    int a;
    while(1){
        printf("\nEnter the choice: 1 for insert(from the end)\n2 for insert(from the front)\n3 for deleting a specific item\n4 for display\n5 for exit\n");
        scanf("%d",&a);
        if(a==1)
        lastinsert();
        else if(a==2)
        firstinsert();
        else if(a==3)
        delete();
        else if(a==4)
        display();
        else 
        exit(0);
    }
    return 0;
}
    

