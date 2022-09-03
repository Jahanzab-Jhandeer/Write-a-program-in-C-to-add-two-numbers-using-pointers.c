#include<stdio.h>
//Write a program in C to add two numbers using pointers
int main () {

    int a;
    int b;
    int *ptr1;
    int *ptr2;
    int sum;

   
    printf("enter first value : ");
    scanf("%d" , &a);
    printf("enter the second value :");
    scanf("%d" , &b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;
    printf("sum value is = %d" , sum);
    return 0;
}