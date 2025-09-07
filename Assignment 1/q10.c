/* To calculate cut off marks of a student using the formula CM = M/2+C/2+P/2+E;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    int M, C, P, E, CM;

    printf("Marks in Mathematics out of 200 : ");
    scanf("%d", &M);

    printf("Marks in Physics out of 200 : ");
    scanf("%d", &P);

    printf("Marks in Chemistry out of 200 : ");
    scanf("%d", &C);

    printf("Marks in entrance exam out of 100 : ");
    scanf("%d", &E);

    CM = M/2+C/2+P/2+E;

    printf("Cutoff marks of the student = %d" , CM);

    return 0;


}