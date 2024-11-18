// Question:
// Write a program to:
// Take two matrices from the user.
// Compute their sum and product.
// Display the results.

#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows for the matrices: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrices: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], product[rows][cols];

    // Input the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Calculate the product of the matrices (only valid if rows = cols)
    if (rows != cols) {
        printf("\nMatrix multiplication is only possible for square matrices (rows = cols).\n");
    } else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                product[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }

    // Print the first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Print the second matrix
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Print the sum of the matrices
    printf("\nSum of the Matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Print the product of the matrices (if valid)
    if (rows == cols) {
        printf("\nProduct of the Matrices:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}