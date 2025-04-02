// compute factors of a given no.

#include <stdio.h>

void printFactors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter a no : ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printFactors(number);
    }

    return 0;
}
