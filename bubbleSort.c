#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *ele1,int *ele2){
    int temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

void bubbleSort(int array[],int arraySize){
    for (int i = 0; i < arraySize - 1; i++){
        for (int j = 0; j < arraySize - i - 1; j++){
            if(array[j]>array[j+1])
                swap(&array[j + 1], &array[j]);
        }
    }
}

int main(){
    int arraySize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arraySize);
    int *array = (int *)malloc(sizeof(int) * arraySize);

    for (int i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0;i<arraySize;i++)
        printf("%d ",array[i]);
    //clock_t t;
    //t = clock();
    //printf("%f", (double)t / CLOCKS_PER_SEC);
    bubbleSort(array, arraySize);
    //t = clock() - t;
    //printf("%f", (double)t / CLOCKS_PER_SEC);
    //double time = (double)t / CLOCKS_PER_SEC;
    printf("\n");

    for(int i=0;i<arraySize;i++)
        printf("%d ",array[i]);

    //printf("Time Taken: %f", time);
    return 0;
}