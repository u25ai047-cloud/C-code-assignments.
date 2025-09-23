/* Program to find the value of y using given the part function;
Keya Parmar;
A047:
*/

#include<stdio.h>
#include<math.h>
int main() 
{
    float x, y;
    int n;

    printf("Enter value of x and n : ");
    scanf("%f %d", &x, &n);

    switch(n) {
        case 1:  
        y=1+x;
        printf("\ny=%f", y);
        break;

        case 2:
        y=1+x/n;
        printf("\ny=%f", y);
        break;

        case 3:
        y=1+pow(x,n);
        printf("\ny=%f", y);
        break;

        default:
        y=1+n*x;
        printf("\ny=%f", y);
        
    }

    return 0;
}