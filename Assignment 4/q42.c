/* Program to read if the number is prime or composite;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()

{
    int num, i, flag=0;

    printf("Enter a Number: ");
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
            printf("The number is composite.");
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