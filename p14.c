// Pass the Address of Two Variables to a Function and Alter Their Contents

#include <stdio.h>

void alterContents(int *a, int *b) {
    *a = *a + 10;
    *b = *b * 2;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before altering: num1 = %d, num2 = %d\n", num1, num2);

    alterContents(&num1, &num2);

    printf("After altering: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}