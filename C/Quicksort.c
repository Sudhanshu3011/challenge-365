#include <stdio.h>

// print the array function
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// partition index
int partition(int arr[], int low, int high)
{
    
    int pivot = arr[low];
    int i = low + 1, j = high;
    int temp;
   
   
    printf("-pivot-%d \n",pivot);

    do
    {
        while (pivot > arr[i])
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        printf("Here i=%d and j=%d \n",i,j);
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    
         print(arr,high);

    return j;
}

// quicksort --
void Quicksort(int arr[], int low, int high)
{
    int partion, iteration=0;

    if (low < high)
    {
       
        partion = partition(arr, low, high);
       
        Quicksort(arr, low, partion - 1);
         
        Quicksort(arr, partion + 1, high);
       
        
   
    }
}

int main()
{

    int arr[] = {23, 1, 1, 0, 45, 78, 2, 98, 5};
    int size = (sizeof(arr) / sizeof(int));
    int high = size;

    print(arr, size);
    Quicksort(arr, 0, high - 1);
    printf("\n");
    print(arr, size);

    return 0;
}