/* TO READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()
{
    int num, q, sum=0, sum2=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0)
    {
        q=num%10;
        sum=sum+q;
        num=num/10;
    }
        
        if(sum/10!=0)
        {
            while(sum!=0)
            {
                q=sum%10;
                sum2=sum2+q;
                sum=sum/10;    
            }

            printf("%d", sum2);    
        }
        
        else
        {
            printf("%d", sum);
        }


        
    return 0;
}