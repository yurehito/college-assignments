// wap to find the smallest or largest of three numbers given as input

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // find smallest no
    int smallest = (num1 <= num2 && num1 <= num3) ? num1 :
                   (num2 <= num3) ? num2 : num3;

    // find largest no
    int largest = (num1 >= num2 && num1 >= num3) ? num1 :
                  (num2 >= num3) ? num2 : num3;

    printf("Smallest : %d\n", smallest);
    printf("Largest : %d\n", largest);

    return 0;
}

