/* Program to print Fibonacci series;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int num, sum, i=0, j=1, n1, n2;
    
    printf("\nEnter range : ");
    scanf("%d", &num);

    n1=0;
    n2=1;
   
    printf(" %d %d ", n1, n2);

    for(int k=0; k<num-2; k++)
    {
        sum = i+j;
        i=j;
        j = sum;

        printf("%d ", j);
    }

    return 0;

}