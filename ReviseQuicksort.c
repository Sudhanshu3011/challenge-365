#include <stdio.h>
void quicksort(int[10], int, int);
int partition(int[10], int, int);
void main()
{

    int x[20], size, i;

    printf("Enter siz of an array:");
    scanf("%d", &size);

    printf("Enter %d elements:", size);
    for (i = 0; i < size; i++)
    {

        scanf("%d", &x[i]);
    }

    quicksort(x, 0, size - 1);

    printf("Sorted Elements:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", x[i]);
    }
    // getch();
}

void quicksort(int x[10], int first, int last)
{

    int mid;

    if (first < last)
    {
        mid = partition(x, first, last);
        quicksort(x, first, mid - 1);
        quicksort(x, mid + 1, last);
    }
}
int partition(int x[10], int p, int r)
{
    int value, i, j, temp;
    value = x[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++)
    {
        if (x[j] <= value)
        {
            i = i + 1;
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
    }
    temp = x[i + 1];
    x[i] = x[r];
    x[r] = temp;

    return (i + 1);
}