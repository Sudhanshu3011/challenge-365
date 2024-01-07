#include <stdio.h>
void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int sortedarray[high];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            sortedarray[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            sortedarray[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        sortedarray[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        sortedarray[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = sortedarray[i];
    }
}
void merge_sort(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low < high)
    {
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void selection_sort(int arr[], int size)
{
    int i, j, temp, sort;
    for (i = 0; i < size - 1; i++)
    {
        sort = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[sort])
            {
                sort = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[sort];
        arr[sort] = temp;
    }
}
int partition(int arr[], int low, int high)
{
    int i, j, temp;
    int pivot = arr[low];
    i = low + 1;
    j = high;
    while (i <= j)
    {
        while (pivot >= arr[i])
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];

            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    int partition_index;
    if (low < high)
    {
        partition_index = partition(arr, low, high);
        quick_sort(arr, low, partition_index - 1);
        quick_sort(arr, partition_index + 1, high);
    }
}

void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {11, 2, 30, -4, 53, 0, 17};
    int arr1[] = {11, 12, 30, 40, 53, 1, 17};
    int arr2[] = {5, 2, 30, 40, 5, 1, -17, 56, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    print(arr, n);
    printf("Using slection_sort\n");
    selection_sort(arr, n);
    print(arr, n);
    printf("\n");
    print(arr1, n1);
    printf("Using Quick_sort\n");
    quick_sort(arr1, 0, n1 - 1);
    print(arr1, n1);

    printf("\n");
    print(arr2, n2);
    printf("Using merge_sort\n");
    merge_sort(arr2, 0, n2 - 1);
    print(arr2, n2);
    return 0;
}