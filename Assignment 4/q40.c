/* PROGRAM TO READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int num=0, sum=0;

    while(num>=0)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        sum=sum+num;
    }

    sum=sum-num;
    printf("Sum of all numbers till a negative number is entered = %d", sum);

    return 0;

}