// create an Array with User Inputs and Print the Same

#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    int arr[n]; // Declare an array of size 'n'

    // Input elements of the array
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
