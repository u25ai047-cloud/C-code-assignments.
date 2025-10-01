/* Program to find out max and min out of 'n' numbers;
Keya Parmar:
A047:
*/

#include<stdio.h>
int main()
{
int n, i, max, min, temp, num;

printf("Enter how many numbers you want to add: ");
scanf("%d" ,&n);

if(n>1)
{
    printf("Enter no.1: ");
    scanf("%d" ,&max);

    printf("Enter no.2: ");
    scanf("%d", &min);

    if(min>max)
        {
            temp=min;
            min=max;
            max=temp;
        }

    for(i=3;i<=n;i++)
    {
        printf("Enter no.%d: ", i);
        scanf("%d", &num);

            if(num>max)
            {
                max=num;
            }

            else if(num<min)
            {
                min=num;
            }
    }

    printf("The greatest number is %d and the least number is %d", max, min);
}       
    
    else
        {
            printf("Enter two or more numbers.");
        }

        

return 0;

}
