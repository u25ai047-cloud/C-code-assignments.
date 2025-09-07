/*To convert temperature from fahrenheit to centigrade;
Keya Parmar;
A-47:*/

#include<stdio.h>

int main()
{
    int F , C;

    printf("Enter degree Fahrenheit : ");
    scanf("%d" , &F);

    C = ((F-32)*5)/9;
    printf("The value of degree Centigrade = %d" , C);

    return 0;

}