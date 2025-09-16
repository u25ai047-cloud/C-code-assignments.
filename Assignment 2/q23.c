/* Program to read two numbers and calculate power without using header file <math.h>;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main() 
{
    int a, b, i;
    int x = 1;

    printf("Enter base and power respectively : ");
    scanf("%d %d", &a, &b);

    if(b<0) {
        printf("Please enter positive power.");
    }

    else {
        
        for (i=1; i<=b; i++)
        x = x*a;
    
        printf("\n%d raised to %d = %d", a, b, x);
   
    }

    return 0;
}