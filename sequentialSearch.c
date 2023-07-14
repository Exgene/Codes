#include <stdio.h>
#include <stdlib.h>

int sequentialSearch(int array[],int keyElement,int arraySize){
    for (int i = 0; i < arraySize; i++){
        if(array[i]==keyElement)
            return i;
    }
    return -1;
}

int main(){
    int arraySize,keyElement;
    printf("Enter the size of the array:\n");
    scanf("%d", &arraySize);
    int *array = (int *)malloc(sizeof(int) * arraySize);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the Key Element to be searched:\n");
    scanf("%d", &keyElement);
    printf("%d", sequentialSearch(array, keyElement, arraySize));
    return 0;
}