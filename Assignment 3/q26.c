/* Program to print sum of all odd and even numbers between 1 to n;
Keya Parmar:
A047:
*/

#include<stdio.h>

int main()
{
    int p, q, i, n;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {   
            {
                p=n*(n+1);
            }
        }

        else 
        {   
            {
                q=n*n;
            }
        }
          
    }
        printf("Sum of odd nos. = %d", q);
        printf("\nSum of even nos. = %d", p);

            return 0;
}