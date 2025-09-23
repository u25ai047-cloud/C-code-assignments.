/* Program to check whether the number is Palindrom;
Keya Parmar:
A047:
*/

#include<stdio.h>

int main()
{
    int q, a, num, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    a=num;

    while(num!=0)
    {
        q=num%10;
        sum=sum*10+q;
        num=num/10;
    }

    if(sum==a)
    {
        printf("Palindrom");
    }
    
    else {
        printf("Not a Palindrom");
    }

    return 0;

}