
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int b[], int p, int c[], int q, int a[])
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < p && j < q)
    {
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }
    while (i < q)
    {
        a[k] = b[i];
        i++;
        k++;
    }
    while (j < q)
    {
        a[k] = c[i];
        j++;
        k++;
    }
}

void mergesort(int a[], int n)
{
    if (n > 1)
    {
        int mid = n / 2;
        int left[mid];
        int right[n - mid];

        for (int i = 0; i < mid; i++)
            left[i] = a[i];
        for (int i = mid; i < n; i++)
            right[i - mid] = a[i];

        mergesort(left, mid);
        mergesort(right, n - mid);

        merge(left, mid, right, n - mid, a);
    }
}

int main()
{
    clock_t start, stop;
    double time;
    int arr[] = {9, 3, 6, 1, 8, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    start = clock();
    printf("\nStart:%.500f", (double)start);
    mergesort(arr, n);
    stop = clock();
    printf("\nStop:%.500f", (double)stop);
    time = ((double)stop - (double)start);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n The time taken is: %f", time);
    return 0;
}