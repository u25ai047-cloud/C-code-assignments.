/* PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    float i, fact=1, num, sum=0;

    printf("Enter range: ");
    scanf("%f", &num);

    for(i=1;i<=num;i++)
    {
        fact = fact*i;
        sum = sum + i/fact;
    }

    printf("%f ", sum);

    return 0;

}