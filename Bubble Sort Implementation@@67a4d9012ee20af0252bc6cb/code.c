#include <stdio.h>

// Function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform Bubble Sort and return the sorted array
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already sorted
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    
    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array using Bubble Sort
    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array in ascending order: ");
    printArray(arr, n);
    
    return 0;
}
