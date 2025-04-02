// wap to compute the sum of first n numbers
// 1,1/2,1/3...1/n

#include<stdio.h>

int main()
{
    int n;
    double sum = 0.0; 
    // for fractional values

    printf("Enter the value of n : ");
    scanf("%d", &n);

    // Ensure n is a valid positive number
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is : %.6lf\n", sum);
    // %.6lf -> upto 3 digit (long float)

    return 0;
}
