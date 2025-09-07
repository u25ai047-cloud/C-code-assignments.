/*To check whether the given character is small letter, capital letter, a digit or a special symbol;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()

{
    char x;

    printf("Enter a character : ");
    scanf("%c" , &x);

    if(x>=65 && x<=90) {
        printf("The character is a capital letter.");
    }
    
    else if(x>=97 && x<=122) {
        printf("The character is a small letter.");
    }
    
    else if(x>=48 && x<=57) {
        printf("The character is a digit.");
    }

    else {
        printf("The character is a special symbol.");
    }

    return 0;
    
}
