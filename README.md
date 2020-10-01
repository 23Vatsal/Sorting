# Sorting
All the basic sorting techniques written in C Programming Language.

## Insertion Sort
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
### Algorithm:
To sort an array of size n in ascending order: <br>
1: Iterate from arr[1] to arr[n] over the array. <br>
2: Compare the current element (key) to its predecessor. <br>
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
### Time Complexity: 
O(n*2)

### Auxiliary Space: 
O(1)

### Boundary Cases: 
Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.

## Algorithmic Paradigm: 
Incremental Approach

### Sorting In Place: 
Yes

### Stable: 
Yes

### Online: 
Yes
### Code:
https://github.com/23Vatsal/Sorting/blob/master/InsertionSort.cpp

## Merge Sort
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. 

### Algorithm:
MergeSort(arr[], l,  r) <br>
If r > l <br>
     1. Find the middle point to divide the array into two halves:  <br> 
             middle m = (l+r)/2 <br>
     2. Call mergeSort for first half: <br>  
             Call mergeSort(arr, l, m) <br>
     3. Call mergeSort for second half: <br>
             Call mergeSort(arr, m+1, r) <br>
     4. Merge the two halves sorted in step 2 and 3: <br>
             Call merge(arr, l, m, r) <br>
### Time Complexity:
O(nlogn)
### Auxiliary Space: 
O(n)
### Algorithmic Paradigm: 
Divide and Conquer

### Sorting In Place: 
No in a typical implementation

### Stable: 
Yes
### Code:
https://github.com/23Vatsal/Sorting/blob/master/MergeSort.cpp

## Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

### Algorithm:
The algorithm maintains two subarrays in a given array. <br>

1) The subarray which is already sorted. <br>
2) Remaining subarray which is unsorted. <br>

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

### Time Complexity: 
O(n2) as there are two nested loops.

### Auxiliary Space: 
O(1)
### Stability:
The default implementation is not stable. However it can be made stable.
### In Place: 
Yes, it does not require extra space.
### Code:
https://github.com/23Vatsal/Sorting/blob/master/SelectionSort.cpp











