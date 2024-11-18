// warf to display fibonacci series

#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci series using recursion : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}
