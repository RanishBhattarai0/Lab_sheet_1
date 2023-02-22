/*WAP to find rupee equivalent of U.s Dollars using exchange rate*/
#include <conio.h>
#include<stdio.h>
int main()
{
    float dollar,rupee;
    float exc;
    printf("Enter the US Dollar:");
    scanf("%f",&dollar);
    printf("Enter the today exchange rate:");
    scanf("%f",&exc);
    rupee=dollar*exc;
    printf("Dollar in rupee is:%f",rupee);
    return 0;
}