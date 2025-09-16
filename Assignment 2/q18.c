/* To read three nos. and print max using conditional operator (? :) ;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    int a, b, c, x;

    printf("Enter a, b and c : ");
    scanf("%d %d %d" , &a, &b, &c);

    x = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b:c);

    printf("max no. is = %d" , x);

    return 0;


}