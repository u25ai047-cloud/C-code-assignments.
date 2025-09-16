/* To read three nos. and print max;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()

{
    int a, b, c;
    
    printf("Enter a, b and c : ");
    scanf("%d %d %d" , &a, &b, &c);

    if(a>b) 
        {
        if(a>c) 
            {
                printf("max no. = %d", a);
            }

        else 
            {
                printf("max no. = %d", c);
            }

    }

    else 
    {
        if(b>c) 
            {
                printf("max no. = %d", b);
            }
        else 
            {
                printf("max no. = %d", c);
            }
    }

    return 0;

}
