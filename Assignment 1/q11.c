/*To read total seconds and convert it into time;
Keya Parmar;
A047:
*/

#include<stdio.h>
 
int main()
{
    int sec, hr, min, time, rem_sec;

    printf("Enter total seconds : ");
    scanf("%d" , &sec);

    hr = sec/3600;
    min = (sec%3600)/60;
    rem_sec = (sec%3600)%60;

    printf("Time = %d %d %d" , hr , min , rem_sec);

    return 0;

}