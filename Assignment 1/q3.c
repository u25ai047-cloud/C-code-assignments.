/*Calculating gross salary;
Keya Parmar;
A-47:*/

#include<stdio.h>

int main()

{
    int no_of_pay_periods, compensation, total_salary;
    float gross_salary;

    printf("Enter No. of pay periods : ");
    scanf("%d" , &no_of_pay_periods);

    printf("Enter Compensation : ");
    scanf("%d" , &compensation);

    printf("Enter Total Salary : ");
    scanf("%d" , &total_salary);

    gross_salary = (total_salary+compensation)/no_of_pay_periods;
    printf("\nGross Salary = %f" , gross_salary);

    return 0;

}