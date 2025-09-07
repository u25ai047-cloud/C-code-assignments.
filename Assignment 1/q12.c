/*To print ASCII code of any character;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    char x;

    printf("Enter a character : ");
    scanf("%c" , &x);

    printf("The ASCII value of %c = %d" , x,x);

    return 0;
}