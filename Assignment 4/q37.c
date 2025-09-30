/* PROGRAM TO PRINT 2,4,6,8,10,12………N.
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int i, n;

    printf("Enter range: ");
    scanf("%d", &n);

    for(i=0; i<2*n; i=i+2)
    {
        printf("%d ", i);
    }

    return 0;
}