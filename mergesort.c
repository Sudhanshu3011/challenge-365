#include <stdio.h>

// printing the array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// merging the array
void Mergearray(int arr[], int mid, int low, int high)
{
    int a[high];
    int i, j, k = low;
    i = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            a[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            a[k] = arr[j];
            j++;
            k++;
        }
    }
    // if there is element left in the arr[i]
    while (i <= mid)
    {
        a[k] = arr[i];
        i++;
        k++;
    }

    // if there is element left in the arr[j]
    while (j <= high)
    {
        a[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = a[i];
        printf("%d ", a[i]);
    }
    printf("\n");
}
// merge sort implementation
void Mergesort(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low < high)
    {

        Mergesort(arr, low, mid);
        Mergesort(arr, mid + 1, high);

        // call the merge
        Mergearray(arr, mid, low, high);
    }
}
int main()
{
    int arr[] = {23, 1, 0, 45, 78, 2, 5, 98};
    int size = (sizeof(arr) / sizeof(int));
    int high = size;

    print(arr, size);
    Mergesort(arr, 0, high - 1);
    printf("\n");
    print(arr, size);

    return 0;
}