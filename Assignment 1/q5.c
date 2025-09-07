/*Swapping two varibles using third variable;
Keya Parmar;
A-47:*/

#include<stdio.h>

int main()
{
    int a = 15 , b = 20;
    int c;

    c=a;
    a=b;
    b=c;
    
    printf("%d %d" , a,b);
    return 0;
}