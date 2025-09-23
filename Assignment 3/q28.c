/* Program to check whether the number is Armstrong or not;
Keya Parmar;
A047:
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, q, sum=0, k, a;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Enter the no. of digits : ");
    scanf("%d", &k);

    a=num;

    while(num!=0)
        {   
            q=num%10;
            sum=sum+pow(q,k);
            num=num/10;
        }

    if(sum==a)
    {
        printf("The number is armstrong.");
    }

    else 
    {
        printf("The number is not armstrong.");
    }
    
    return 0;
}