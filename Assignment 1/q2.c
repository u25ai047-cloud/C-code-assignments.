/*Calculating total marks and total percentage of five subjects;
Keya Parmar;
A-47:*/

#include<stdio.h>

int main()
{
    int Maths, Hindi, English, Science, Computer;

    printf("Enter Maths marks : ");
    scanf("%d" , &Maths);

    printf("Enter Hindi marks : ");
    scanf("%d" , &Hindi);

    printf("Enter English marks : ");
    scanf("%d" , &English);

    printf("Enter Science marks : ");
    scanf("%d" , &Science);

    printf("Enter Computer marks : ");
    scanf("%d" , &Computer);

    int total_marks;

    total_marks = (Maths+Hindi+English+Science+Computer);
    printf("\nTotal Marks = %d" , total_marks);

    float total_percentage;

    total_percentage = (total_marks*100/500);
    printf("\nTotal Percentage = %f" , total_percentage);

    return 0;

}