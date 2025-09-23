/* Program to print whether the number is prime or not;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    int num, i, flag=0;

    printf("Enter a Number : ");
    scanf("%d", &num);

    if(num!=0)
    {
        for(i=2; i<num/2&&flag==0; i++)
    {
        if(num%i==0) 
        { 
          flag=1;
        }
    }
        if(flag==1)
        {
            printf("The number is not prime.");
        }
        else {
            printf("The number is prime.");
        }
    }

    else 
    {
        printf("Zero is neither prime not composite.");
    }

    return 0;
}