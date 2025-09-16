/* To check whether the character is a small case letter or not using conditional operator;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    char x;

    printf("Enter a character : ");
    scanf("%c" , &x);

    (x>=97 && x<=122) ? printf("A small case letter\n") : printf("Not a small case letter\n");

    return 0;

}