#include <stdio.h>
void search(int arr[], int num,int size)
{
    int i,a=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("The no is at given index [%d].", i + 1);
            a=1;
    
        }
    }
    if (a == 0)
    {
        printf("The no is not in the array.");
    }
}
int main()
{
    int arr[] = {34, 45, 67, 7}, size, num;
    size = sizeof(arr) / sizeof(int);
    printf("%d",size);
    printf("Here the array.\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the no for searching:\n");
    scanf("%d", &num);
    search(arr, num,size);
    return 0;
}
