// Write a program to find the sum of n elements entered by the user. To write this program, allocate memory dynamically using malloc() or calloc() functions.

#include <stdio.h>
#include <stdlib.h> // For malloc() and free()

int main() {
    int n;
    float *arr, sum = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically using malloc
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum
    printf("\nSum of the elements: %.2f\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}