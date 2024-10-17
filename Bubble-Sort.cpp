#include <iostream>
#include <vector>

// Function to perform Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element is greater than the next
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!swapped)
            break;
    }
}

// Utility function to print the array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    printArray(arr);

    bubbleSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
