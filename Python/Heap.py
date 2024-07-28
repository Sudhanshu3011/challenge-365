# A heap is a specialized tree-based data structure that satisfies the heap property. In a 
# min-heap, for any given node 𝑖, the value of 𝑖 is less than or equal to the values of its 
# children. Conversely, in a max-heap, the value of  𝑖 is greater than or equal
# to the values of its children. This makes heaps useful for implementing priority queues.

# Representation
# Binary Heap: The most common type of heap, often implemented as a binary tree. 
# The binary heap can be represented as an array, where for a node at index 𝑖

# The left child is at index 2𝑖+1

# The right child is at index 2i+2

# The parent is at index ⌊𝑖−1/2⌋

# Example of a Min-Heap
# Consider a min-heap represented as an array: [1,3,5,7,9,6,8].
#         1
#       /   \
#      3     5
#     / \   / \
#    7   9 6   8


# Example of a Max-Heap
# Consider a max-heap represented as an array: [9,7,6,5,3,2,1].
#         9
#       /   \
#      7     6
#     / \   / \
#    5   3 2   1
 

def swap(arr, i, j):
    
    arr[i], arr[j] = arr[j], arr[i]

def heapify(arr, n, i):
    
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and arr[left] > arr[largest]:
        largest = left

    if right < n and arr[right] > arr[largest]:
        largest = right

    if largest != i:
        swap(arr, i, largest)
        heapify(arr, n, largest)

def heap_sort(arr):
  
    n = len(arr)

    # Build a max-heap
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    # Extract elements from the heap one by one
    for i in range(n - 1, 0, -1):
        swap(arr, 0, i)  # Move current root to the end
        heapify(arr, i, 0)  # Call max-heapify 

def print_array(arr):
    """
    Print the elements of the list arr.
    """
    for i in arr:
        print(i, end=' ')
    print()


arr = [12, 11, 13, 5, 6, 7]
print("Original array:")
print_array(arr)

heap_sort(arr)
print("Sorted array:")
print_array(arr)
