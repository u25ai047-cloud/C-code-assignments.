/* Program to print amount paid by the customer in an electric distribution company charges;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    float unit, rate;
    printf("Enter unit consumption: ");
    scanf("%f", &unit);

    if(unit>0&&unit<=209)
    {
        rate = 0.50*unit;
        printf("Amount to be paid = %f", rate);
    }

    else if(unit>=210&&unit<=400)
    {
        rate = 0.65*(unit-200) + 100;
        printf("Amount to be paid = %f", rate);
    }
    
    else if(unit>401&&unit<=600)
    {
        rate = 0.80*(unit-400) + 230;
        printf("Amount to be paid = %f", rate);
    }

    else if(unit>600)
    {
        rate = 125*(unit-200) + 425;
        printf("Amount to be paid = %f", rate);
    }

    else
    {
        printf("Invalid comsumption unit!");
    }
    
    return 0;
}
