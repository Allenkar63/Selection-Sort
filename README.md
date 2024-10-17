# Sorting Algorithms in C++
Experiment 20

## Aim

The aim of this repository is to implement and demonstrate three fundamental sorting algorithms—Selection Sort, Insertion Sort, and Bubble Sort—using C++. These algorithms are basic comparison-based sorting techniques commonly used to introduce the concept of sorting in computer science.

## Theory

Sorting is a fundamental task in programming that involves arranging data in a specific order, typically in ascending or descending order. Efficient sorting is crucial in optimizing the performance of algorithms that require sorted data (e.g., binary search).

In this repository, three classical sorting algorithms are implemented:

1. **Selection Sort**: Selects the smallest (or largest) element from the unsorted portion and swaps it with the first element of the unsorted portion.
2. **Insertion Sort**: Builds the sorted array one element at a time by inserting each element into its correct position.
3. **Bubble Sort**: Repeatedly swaps adjacent elements if they are in the wrong order, "bubbling" the largest unsorted element to its correct position.

Each algorithm has its own strengths and weaknesses depending on the size and nature of the data.

### Time Complexity for Each Algorithm:
- **Best case**: O(n) for Insertion Sort (when the array is already sorted), O(n²) for Selection and Bubble Sort.
- **Worst case**: O(n²) for all three algorithms.
- **Average case**: O(n²) for all three algorithms.

### Space Complexity:
- All three algorithms have a space complexity of **O(1)** since they are in-place sorting algorithms and do not require extra memory for the sorting process.

## Algorithms

### 1. **Selection Sort Algorithm**:
Selection Sort repeatedly finds the minimum element from the unsorted part and swaps it with the first unsorted element.

### 2. **Insertion Sort Algorithm**:
Insertion Sort builds a sorted array by repeatedly taking each element from the unsorted part of the array and inserting it into its correct position in the sorted part.

### 3. **Bubble Sort Algorithm**:
Bubble Sort repeatedly compares adjacent elements in the array and swaps them if they are in the wrong order, "bubbling" the largest unsorted element to its correct position.

## Conclusion:
In this experiment we learned about many sorting algorithms such as bubble sort,selection sort and insertion sort with cpp.
