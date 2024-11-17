// wap to take input of two numbers and print their sum, product, difference
#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    printf("Enter Operator : ");
    scanf("%c",&choice);

    switch (choice)
    {
    case '+':
        printf("Sum = %d",a+b);
        break;
    
    case '-':
        printf("Difference = %d",a+b);
        break;

     case '*':
        printf("Product = %d",a*b);
        break; 

    default:
        printf("Invalid Operator");
        break;
    }


    return 0;
}