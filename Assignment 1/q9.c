/* To read time in hr, min, sec and convert it into total seconds;
Keya Parmar;
A047:
*/

#include<stdio.h>
int main()

{
    int hr , min , sec;

    printf("Enter hours : ");
    scanf("%d" , &hr);

    printf("Enter minutes : ");
    scanf("%d" , &min);

    printf("Enter seconds : ");
    scanf("%d" , &sec);

    int total_secs;

    total_secs = (hr*3600+min*60+sec);

    printf("Total seconds = %d" , total_secs);

    return 0;

    

}