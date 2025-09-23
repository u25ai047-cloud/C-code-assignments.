/* Program to print table of any number;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main() 
{
    int num, c=1, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        c=num*i;
        printf("\n%d*%d = %d", num, i, c);
    }

    return 0;
}