/* To find factorial value of any number;
Keya Parmar;
A047:
*/


#include<stdio.h>
int main()
{
    int n=1;
    int a, i;

    printf("Enter a positive no. : ");
    scanf("%d", &a);

    if(a<0) 
    printf("Factorial doesnt exist");

    else {
        int i=1;
        while(i<=a)
        {   
            n = n*i;
            i++;
        }
        printf("\nFactorial of %d = %d", a, n);
    }

    return 0;
}