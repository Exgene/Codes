#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int left, int right, int key){
    if(left<=right){
        int middle = (left + right) / 2;
        if(array[middle]==key)
            return middle;
        if(array[middle]>key)
            return binarySearch(array, left, middle - 1, key);
        return binarySearch(array, middle + 1, right, key);
    }
    return -1;
}

int main(){
    int arraySize,searchElement;
    printf("Enter the size of the array:\n");
    scanf("%d", &arraySize);
    
    int *array = (int *)malloc(sizeof(int) * arraySize);

    for (int i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter the search Element:\n");
    scanf("%d", &searchElement);

    printf("%d", binarySearch(array, 0, arraySize - 1, searchElement));

    return 0;
}