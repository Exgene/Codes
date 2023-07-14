#include <stdio.h>
#include <stdlib.h>

void swap(int *ele1,int *ele2){
    int temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

void selectionSort(int arr[],int m){
    int minimum;
    for(int i=0;i<m;i++){
        minimum = i;
        for(int j=i+1;j<m;j++){
            if(arr[j]<arr[minimum])
                minimum = j;
        }
        swap(&arr[i],&arr[minimum]);
    }
}

int main() {
    int arraySize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arraySize);
    int *array = (int *)malloc(sizeof(int) * arraySize);
    for (int i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0;i<arraySize;i++)
        printf("%d ",array[i]);
    selectionSort(array, arraySize);
    printf("\n");
    for(int i=0;i<arraySize;i++)
        printf("%d ",array[i]);
    return 0;
}

