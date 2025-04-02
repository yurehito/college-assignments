// wap to reverse a no.
#include<stdio.h>
int main()
{
    int a,t,reverse = 0;
    printf("Enter a number : ");
    scanf("%d",&a);

     // Store original value
    t = a;
    
    // Reverse the number
    while (t != 0) {
        reverse = reverse * 10 + t % 10;
        t /= 10;
    }
    
    printf("Reversed number: %d\n", reverse);

    return 0;
}