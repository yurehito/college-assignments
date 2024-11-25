// write a program to use a macro to swap two number
#include<stdio.h>

#define SWAP(a, b) do { \
    a = a ^ b; \
    b = a ^ b; \
    a = a ^ b; \
} while (0)

int main() {
    int a = 9, b = 3;
    printf("Before swapping: a = %d and b = %d\n", a, b);
    SWAP(a, b);
    printf("After swapping: a = %d and b = %d\n", a, b);
    return 0;
}
