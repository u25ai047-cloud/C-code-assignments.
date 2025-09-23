/* Program to print sum of individual digits of 'n' digit number;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int q, sum=0, num;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(num!=0)
    {
        q=num%10;
        sum=sum+q;
        num=num/10;
    }

    printf("The required sum is %d", sum);

    return 0;
}