/* PROGRAM TO PRINT 1,4,9,16,25,………N.
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int i, n, sq;

    printf("Enter range: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) 
    {
        sq = i*i;
        printf("%d ", sq);
    }

    return 0;
}