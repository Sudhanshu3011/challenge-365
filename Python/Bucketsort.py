"""
Bucket sort is a sorting algorithm that divides an array into a number of buckets. 
Each bucket is then sorted individually, either using another sorting algorithm or by 
recursively applying the bucket sort. Finally, the sorted buckets are concatenated to produce 
the final sorted array.

How Bucket Sort Works:

Initialization:
Determine the number of buckets. Typically, the number of buckets is the same as the number of
elements in the array.
Create empty buckets. Each bucket is a list that will hold elements.

Distribution:
Find the maximum value in the array to help normalize the distribution of elements into 
buckets.
Distribute each element of the array into its respective bucket. The bucket index for an 
element is determined using a hash function or by normalizing the value based on the maximum 
value.

Sorting Each Bucket:
Sort each bucket individually. You can use any efficient sorting algorithm like quicksort or 
mergesort.

Concatenation:
Concatenate the sorted buckets to form the final sorted array.


________________________________________________________________________________________
Initialization:

Determine the number of buckets: num_buckets = len(arr) = 7.
Create empty buckets: buckets = [[], [], [], [], [], [], []].
Find the Maximum Value:

Maximum value in the array: max_value = 0.52.
Distribute Elements into Buckets:

For each element in the array, calculate the bucket index and place the element in the 
corresponding bucket.
Element	      Bucket           Bucket Index       	Updated Buckets
0.42   	int(0.42 / 0.52 * 6)	  4	             [[], [], [], [], [0.42], [], []]
0.32  	int(0.32 / 0.52 * 6)	  3	             [[], [], [], [0.32], [0.42], [], []]
0.23	int(0.23 / 0.52 * 6)	  2			     [[], [], [0.23], [0.32], [0.42], [], []]
0.52	int(0.52 / 0.52 * 6)	  6		         [[], [], [0.23], [0.32], [0.42], [], [0.52]]
0.25	int(0.25 / 0.52 * 6)	  2			     [[], [], [0.23, 0.25], [0.32], [0.42], [], [0.52]]
0.47    int(0.47 / 0.52 * 6)	  5			     [[], [], [0.23, 0.25], [0.32], [0.42], [0.47], [0.52]]
0.51   	int(0.51 / 0.52 * 6)	  5			     [[], [], [0.23, 0.25], [0.32], [0.42], [0.47, 0.51], [0.52]]

Sort Each Bucket:
Sort each non-empty bucket individually.
Bucket	         Sorted Bucket
[0.23, 0.25]	   [0.23, 0.25]
[0.32]	           [0.32]
[0.42]	           [0.42]
[0.47, 0.51]	   [0.47, 0.51]
[0.52]	          [0.52]
Concatenate Sorted Buckets:

Combine all sorted buckets to form the final sorted array.
sorted_arr = [0.23, 0.25, 0.32, 0.42, 0.47, 0.51, 0.52].

Final Sorted Array
The final sorted array is [0.23, 0.25, 0.32, 0.42, 0.47, 0.51, 0.52].
"""




def bucket_sort(arr):
    """
    Implementation of the Bucket Sort algorithm.
    """
    if len(arr) == 0:
        return arr
    
    num_buckets = len(arr)
    buckets = [[] for _ in range(num_buckets)]
    max_value = max(arr)

    # Distribute elements into buckets

    for num in arr:
        index = int(num / max_value * (num_buckets - 1))
        buckets[index].append(num)

    sorted_arr = []
    
    # Sort each bucket and concatenate the results
    # elements of the different bucket are fetched and appended in the sorted array
    for bucket in buckets:
        sorted_arr.extend(sorted(bucket))
        #extend use :The extend() method in Python is a list method used to add all elements 
        #            from an iterable (such as another list) to the end of the current list.
        #            It effectively extends the list by appending elements from the provided 
        #            iterable.
    
    return sorted_arr

# Example usage
arr = [42, 32, 232, 52, 253, 427, 51]
print("Original array:")
print(arr)

sorted_arr = bucket_sort(arr)
print("Sorted array:")
print(sorted_arr)
