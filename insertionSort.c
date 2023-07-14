#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int arraySize)
{
    int key, j, i;
    for (i = 1; i < arraySize; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int arraySize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arraySize);

    int *array = (int *)malloc(sizeof(int) * arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < arraySize; i++)
        printf("%d ", array[i]);

    insertionSort(array, arraySize);

    printf("\n");

    for (int i = 0; i < arraySize; i++)
        printf("%d ", array[i]);

    return 0;
}