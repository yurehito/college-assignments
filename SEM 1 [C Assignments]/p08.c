// wap to compute the sum of first n numbers
// 1,1/2,1/3...1/n

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i; // subtract even numbers
        } else {
            sum += i; // add odd numbers
        }
    }

    printf("Sum: %d\n", sum);
    return 0;
}
