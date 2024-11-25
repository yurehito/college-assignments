// write a program to use a macro to swap two matrix
#include<stdio.h>
#define SWAP(a,b){
a=a^b;
b=a^b;
a=a^b;}

int main(){
  int a = 9, b = 3;
  printf("Before swapping a = %d and b = %d",a,b);
  SWAP(a,b);
  printf("After swapping a = %d and b = %d",a,b);
  return 0;
}
