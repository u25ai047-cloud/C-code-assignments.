/* To find factorial value of any number;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int a, i;
    int n=1;

    printf("Enter a positive number : ");
    scanf("%d", &a);

    if(a<0)
    {
        printf("\nFactorial doesnt exist.");
    }
    else {
        
        for (i=1; i<=a; i++)
            n = n*i;
        
            printf("\nFactorial of %d = %d", a, n);
    }

    return 0;
}