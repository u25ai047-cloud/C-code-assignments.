/* Program to print reverse of a given number;
Keya Parmar:
A047:
*/

#include<stdio.h>
int main()
{
    int num, sum=0, q, a;

    printf("Enter a number : ");
    scanf("%d", &num);
    a=num;

    while(num!=0)
    {
        q=num%10;
        sum=sum*10+q;
        num=num/10;
    }

    printf("The reverse of %d is %d", a, sum);

    return 0;
}