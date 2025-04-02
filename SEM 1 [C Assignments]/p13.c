//  Calculate Factorial of a Number Using i) Recursion, ii) Iteration

// i) 
#include <stdio.h>

int factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1; // Base case: 0! = 1! = 1
    else
        return n * factorialRecursive(n - 1); // Recursive step
}

int main() {
    int n;

    printf("Enter a number to calculate factorial : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d using recursion is: %d\n", n, factorialRecursive(n));
    }

    return 0;
}

// ii)
// #include <stdio.h>

// int factorialIterative(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int n;

//     printf("Enter a number to calculate factorial (iteration): ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         printf("Factorial of %d using iteration is: %d\n", n, factorialIterative(n));
//     }

//     return 0;
// }