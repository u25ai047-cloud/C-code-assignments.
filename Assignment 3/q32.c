/* Program to find out max and second max from 'n' numbers;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int max1, max2, n, num, temp, i;
    printf("Enter the amount of numbers: ");
    scanf("%d", &n);
    
    if(n>1)
    {
        printf("Enter no.1: ");
        scanf("%d", &max1);
        printf("Enter no.2: ");
        scanf("%d", &max2);

        if(max2>max1)
        {
            temp=max2;
            max2=max1;
            max1=temp;
        }
        
        for(i=3;i<=n;i++)
        {
            printf("Enter no.%d: ", i);
            scanf("%d", &num);

            if(num>max1)
            {
                max2=max1;
                max1=num;
            }

            else if(num>max2)
            {
                max2=num;
            }
        }

        printf("The greatest number is %d and the second greatest number is %d", max1, max2);
        
    }

    else
    {
        printf("Enter two or more nos.");
    }

    return 0;

}
