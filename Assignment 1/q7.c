/* To calculate the area of a triangle;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int h,b;
    float A;

    printf("Enter height : ");
    scanf("%d" , &h);

    printf("Enter base : ");
    scanf("%d" , &b);

    A = (h*b)/2;

    printf("Area of the triangle = %f" , A);

    return 0;
}