/* Program to calculate the commission for sales for a sales representative;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    float sales, com;
    printf("Enter sales: ");
    scanf("%f", &sales);

    if(sales>0&&sales<=500)
    {
        com=sales/20;
        printf("The commission for the given sales = %f", com);
    }

    else if(sales>500&&sales<=2000)
    {
        com=((sales-500)/10)+35;
        printf("The commission for the given sales = %f", com);
    }

    else if(sales>2000&&sales<=5000)
    {
        com=((sales-2000)*12/100)+185;
        printf("The commission for the given sales = %f", com);
    }
    
    else if(sales>=5000)
    {
        com=(sales*12.5)/100;
        printf("The commission for the given sales = %f", com);
    }

    else
    {
        printf("Invalid sales!");
    }
    return 0;
}