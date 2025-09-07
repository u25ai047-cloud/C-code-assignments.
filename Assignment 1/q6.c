/*Swapping two varibles without using third variable;
Keya Parmar;
A-47:*/

#include<stdio.h>

int main()
{
    int a=10, b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d", a,b);
    return 0;

}