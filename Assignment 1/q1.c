/*Calculate simple interest;
Keya Parmar;
A-47:*/


#include<stdio.h>

int main(){
    
    int rate , principle , time ;
    float SI;

    printf("Enter rate : ");
    scanf("%d" , &rate);

    printf("Enter principle : ");
    scanf("%d" , &principle);

    printf("Enter time : ");
    scanf("%d" , &time);

    SI = (rate*principle*time)/100;
    printf("\nSI = %f" , SI);
    
    return 0;
}