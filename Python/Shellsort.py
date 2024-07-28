
"""
Shell Sort Algorithm
Overview:
Shell sort is an optimization of insertion sort that 
allows the exchange of items that are far apart. 
The main idea is to arrange the array so that starting 
anywhere, taking every gap  element produces a sorted 
list. This process is repeated with progressively smaller
 gaps, ultimately ending with a gap of 1, at which point 
 the list is completely sorted.

Steps:

Initialize Gap:

Start with a gap, typically half the length of the array.

Sort with Gap:

Perform a gapped insertion sort for this gap size.
Compare elements that are gap positions apart and sort 
them.
Reduce Gap:

Reduce the gap and repeat the process. Commonly, the gap
 is halved in each step until it becomes 1.
Key Points:

The initial gap is typically set to half the array length.
The gap is progressively reduced by dividing it by 2.
When the gap is 1, it performs a final insertion sort pass 
over the entire array.
"""


def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

def shellSort(arr):
    length = len(arr)
    gap = length // 2

    while gap > 0:
        for i in range(gap, length):
            temp = arr[i]
            j = i
            print(temp)
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
                print(arr)
            arr[j] = temp
        gap //= 2

arr = [42, 32, 232, 52, 253, 427, 51,89,90,78,1]
print("Original array:")
print(arr)

shellSort(arr)
print("Sorted array:")
print(arr)
