// Perform Operations on an Array Based on User Menu Selection
#include <stdio.h>

void printEven(int arr[], int n) {
    printf("Even-valued elements: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printOdd(int arr[], int n) {
    printf("Odd-valued elements: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void calculateSumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum = %d, Average = %.2f\n", sum, (float)sum / n);
}

void findMaxAndMin(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Maximum = %d, Minimum = %d\n", max, min);
}

int removeDuplicates(int arr[], int n) {
    int temp[n], k = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    return k;
}

void printReverse(int arr[], int n) {
    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, choice;

    do {
        printf("\nMenu:\n");
        printf("1. Enter array\n");
        printf("2. Print even-valued elements\n");
        printf("3. Print odd-valued elements\n");
        printf("4. Calculate sum and average\n");
        printf("5. Find maximum and minimum\n");
        printf("6. Remove duplicates\n");
        printf("7. Print array in reverse order\n");
        printf("8. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("Element %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printEven(arr, n);
                break;
            case 3:
                printOdd(arr, n);
                break;
            case 4:
                calculateSumAndAverage(arr, n);
                break;
            case 5:
                findMaxAndMin(arr, n);
                break;
            case 6:
                n = removeDuplicates(arr, n);
                printf("Array after removing duplicates: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 7:
                printReverse(arr, n);
                break;
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}