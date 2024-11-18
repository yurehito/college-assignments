// Write a function to accept two arrays as arguments and return their sum as an array.

#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

// Function to calculate the sum of two arrays
int* sum_arrays(int *arr1, int *arr2, int size) {
    int *sum = (int *)malloc(size * sizeof(int));
    if (sum == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    return sum;
}

int main() {
    int n;
    int *arr1, *arr2, *result;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    // Allocate memory for the two arrays
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Calculate the sum of the two arrays
    result = sum_arrays(arr1, arr2, n);

    // Display the result
    printf("\nSum of the two arrays:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, result[i]);
    }

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}
