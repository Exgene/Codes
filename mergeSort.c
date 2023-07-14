#include <stdio.h>

void merge(int array[], int left, int mid, int right)
{
    int i = 0;
    int j = 0;
    int k = left;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = array[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = array[mid + j + 1];
    }
    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = L[i];
        k++, i++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        k++, j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main(){
    int arr_size,array[20];
    printf("Enter the size of the array\n");
    scanf("%d", &arr_size);
    for (int i = 0;i<arr_size; i++){
        scanf("%d", &array[i]);
    }
    mergeSort(array, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++)
        printf("%d ", array[i]);
    return 0;
}