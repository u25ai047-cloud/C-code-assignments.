/* Program to read a number and print its factors;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num==0)
    {
        printf("0 doesnt have any factors.");
    }

    else if(num<0)
    {
        printf("Enter a positive number.");
    }

    else
    {
        printf("Factors: ");
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
    
}
