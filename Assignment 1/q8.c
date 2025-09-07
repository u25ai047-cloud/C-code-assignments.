/* EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. WRITE A C
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES;
Keya Parmar;
A047:
*/

#include<stdio.h>

int main()
{
    int sec, min, hour, day;

    printf("Enter seconds : ");
    scanf("%d" , &sec);

    min = sec/60;
    hour = min/60;
    day = hour/24;

    printf("\nThe revolution time the earth takes in minutes = %d" , min);
    
    printf("\nThe revolution time the earth takes in hours = %d" , hour);
    
    printf("\nThe revolution time the earth takes in days = %d" , day);


    return 0;

}