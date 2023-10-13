#include<stdio.h>
  
 int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = (high + low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main()
{
     int arr[]={23,1,34,67,-2,87},n,key,a=0;
     
     n=(sizeof(arr)/sizeof(int));
     //sorting the array
     for(int i=0;i<n;i++)
     {
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
     }
     //printing thr sorted aaray
     printf("The sorted array is.\n");
     for(int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
    
     printf("\nEnter the element to find:");
     scanf("%d",&key);
    
    int result = binarySearch(arr, key, 0, n- 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index [%d].", result+1);

     return 0;
}
