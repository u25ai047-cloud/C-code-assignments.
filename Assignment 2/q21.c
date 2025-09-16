/* Program to read two numbers and perform specific task using arithmetic operators using switch case;
Keya Parmar;
A047: */
#include<stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an arithmetic operator : ");
    scanf("%c", &op);

    printf("\nEnter two numbers : ");
    scanf("%d %d", &a, &b);

    switch (op) 
    {
        case '+':
        printf("\nThe sum is %d", a+b);
        break;

        case '-':
        printf("\nThe difference is %d", a-b);
        break;

        case '*':
        printf("\nThe product is %d", a*b);
        break;

        case '/':
        
        if(b!=0) {
        printf("\nThe quotient is %d", a/b);
        }
        else {
            printf("\nMathematically incorrect!");
        }
        break;

        default:
        printf("\nCalculation is invalid!");

}

return 0;
}