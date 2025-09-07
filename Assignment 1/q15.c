/* To read marks of five subjects and print division;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    int m, s, e, ss, h;

    printf("Enter maths marks : ");
    scanf("%d" , &m);

    printf("Enter science marks : ");
    scanf("%d" , &s);

    printf("Enter english marks : ");
    scanf("%d" , &e);

    printf("Enter social studies marks : ");
    scanf("%d" , &ss);

    printf("Enter hindi marks : ");
    scanf("%d" , &h);

    int marks, p;
    //total marks = 500;

    marks = m+s+e+ss+h;
    
    p = (marks*100)/500;

    if(p>90 && p<=100) {
        printf("\nThe division is A.");
    }

    else if(p>80 && p<=90) {
        printf("\nThe division is B.");
    }

    else if(p>70 && p<=80) {
        printf("\nThe division is C.");
    }

    else if(p>60 && p<=70) {
        printf("\nThe diviion is D.");
    }

    else {
        printf("\nThe division is E.");
    }

    return 0;
}