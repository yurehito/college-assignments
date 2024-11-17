// wap to print sum and product or digits of an integers

#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1;

    printf("Enter an integer : ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        if(digit != 0){
            // ignores 0
            product *= digit;
        }
        num /= 10; // work as increament statement too 
    }

    printf("Sum of digits : %d\n", sum);
    printf("Product of digits : %d\n", product);

    return 0;
}
