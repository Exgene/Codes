#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
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
            printf("\nNode inserted");  
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
            printf("\nNode inserted");  
          
        }  
    }  
}  

void firstinsert(){
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL){
    printf("NO MEMORY");
    exit(0);
}
printf("Enter the number:");
scanf("%d",&ptr->data);
if(head==NULL){
    head=ptr;
    ptr->next=NULL;
    printf("Node inserted\n");
}
else{
    ptr->next=head;
    head=ptr;
}
}
void display(){
    struct node *ptr;
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
    struct node *ptr;
    struct node *prev;
    int num;
    printf("Enter the number to be deleted");
    scanf("%d",&num);
    if(head==NULL){
        printf("Nothing to delete");
    }
    else{
        ptr=head;
        prev=NULL;
        while(ptr->data!=num){
            prev=ptr;
            ptr=ptr->next;
        }
        if(ptr!=NULL){
         prev->next=ptr->next;
         free(ptr);
        }
    }
}

int main(){
    int a;
    while(1){
        printf("Enter the choice: 1 for insert(from the end)\n2 for insert(from the front)\n3 for deleting a specific item\n4 for display\n5 for exit\n");
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
    

