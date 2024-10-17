# Selection Sort in C++
Experiment 20

This repository contains a C++ implementation of the Selection Sort algorithm.

## Selection Sort Overview

Selection Sort is an in-place, comparison-based algorithm that works by dividing the array into a sorted and an unsorted region. The algorithm repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first unsorted element, progressively growing the sorted region.

**Time Complexity:**
- Best, Average, and Worst case: O(n²) where n is the number of elements in the array. This is due to the nested loops used for finding the minimum element and swapping it.

**Space Complexity:**
- O(1), as the algorithm only requires a constant amount of extra memory space for variables like `minIndex`.

## Implementation

The program defines a `selectionSort` function which accepts a vector of integers and sorts them in ascending order. The main function demonstrates the use of this algorithm on a sample array.

### Files:
- `selection_sort.cpp`: Contains the implementation of Selection Sort in C++.

## Algorithm

The Selection Sort algorithm works by dividing the array into two parts: a sorted part and an unsorted part. It repeatedly selects the minimum (or maximum) element from the unsorted part and swaps it with the first unsorted element, progressively growing the sorted part.

### Steps:
1. Start with the first element as the minimum.
2. Compare this element with the rest of the array to find the smallest element.
3. Swap the smallest element with the first element of the unsorted part.
4. Move the boundary between the sorted and unsorted parts by one position to the right.
5. Repeat steps 1-4 for the remaining unsorted elements until the entire array is sorted.

## Implementation and Conclusion

The program defines a `selectionSort` function that accepts a vector of integers and sorts them in ascending order. The main function demonstrates the use of this algorithm on a sample array.


