# Quick Sort Algorithm in C++
## Description
Quisort is an implementation of the Quicksort algorithm, a highly efficient sorting method based on the divide-and-conquer paradigm. This algorithm selects a "pivot" element from the array and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted. 

## Algorithm Overview
Quicksort operates by selecting a pivot element and partitioning the input array into two sections: elements less than the pivot and elements greater than the pivot. The pivot is placed in its correct sorted position, and then the algorithm recursively applies the same logic to the two partitions.

The steps are as follows:
1. Choose a pivot element.
2. Partition the array such that all elements smaller than the pivot come before it, and all elements greater than it come after it.
3. Recursively apply the same procedure to the sub-arrays formed by partitioning.

The base case of the recursion is when the array has one or zero elements, in which case it's already sorted.

## Code Explanation
The code is structured into the following main components:
- **Partition Function**: Responsible for rearranging the array based on the pivot.
- **Recursive QuickSort Function**: Recursively sorts the sub-arrays formed by partitioning.
- **Driver Code**: Handles input/output and initiates the sorting process.

## Time and Space Complexity
Time Complexity:
- Best case: O(n log n) – Occurs when the pivot divides the array into two equal parts.
- Average case: O(n log n) – Similar to the best case in most random arrays.
- Worst case: O(n^2) – Happens when the pivot consistently chooses the smallest or largest element, such as when sorting an already sorted array.
Space Complexity:
- Space Complexity: O(log n) – This is due to the recursive function calls for each partition, which uses a recursion stack. However, the algorithm sorts in place and does not require additional memory allocation for data storage beyond the recursion stack.
