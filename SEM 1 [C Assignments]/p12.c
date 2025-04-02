// waf to display fibonacci series - i) iteration, ii) recursiion 

// ii) using recurssion 
#include <stdio.h>
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


// i) using iteration
// #include <stdio.h>

// void fibonacciIterative(int n) {
//     int a = 0, b = 1, next;

//     printf("Fibonacci series using iteration: ");
//     for (int i = 0; i < n; i++) {
//         if (i == 0)
//             next = a;
//         else if (i == 1)
//             next = b;
//         else {
//             next = a + b;
//             a = b;
//             b = next;
//         }
//         printf("%d ", next);
//     }
//     printf("\n");
// }

// int main() {
//     int n;

//     printf("Enter the number of terms for the Fibonacci series (iteration): ");
//     scanf("%d", &n);

//     fibonacciIterative(n);

//     return 0;
// }
