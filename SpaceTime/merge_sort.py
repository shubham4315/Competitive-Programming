"""
Merge Sort
"""

__author__ = "Shubham"


# merge two subarrays of arr[]
def merge(arr, start, mid, end):
    size1 = mid - start + 1
    size2 = end - mid

    left = [0] * size1
    right = [0] * size2

    # copy data to temp arrays left[] and right[]
    for i in range(size1):
        left[i] = arr[start + i]
    for j in range(size2):
        right[j] = arr[mid + j + 1]

    i = 0
    j = 0
    k = start

    # merge the two arrays
    while i < size1 and j < size2:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    # copy the remaining elements of left array
    while i < size1:
        arr[k] = left[i]
        k += 1
        i += 1

    # copy the remaining elements of right array
    while j < size2:
        arr[k] = right[j]
        j += 1
        k += 1


# merge sort function
def merge_sort(arr, start, end):
    if start >= end:
        return
    mid = start + (end - start) // 2
    merge_sort(arr, start, mid)
    merge_sort(arr, mid + 1, end)
    merge(arr, start, mid, end)


if __name__ == "__main__":
    """This is executed when run from the command line"""

    arr = [
        10,
        5,
        7,
        12,
        7,
        47,
        10,
        11,
        16,
    ]

    for i in range(len(arr)):
        print("%d" % arr[i], end=" ")
    merge_sort(arr, 0, 8)
    print("\n\nSorted array is")
    for i in range(len(arr)):
        print("%d" % arr[i], end=" ")
