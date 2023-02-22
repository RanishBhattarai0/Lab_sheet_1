/*WAP to find price of n mangoes given the price of a dozen mangoes*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float result,price,dozen;
    printf("Enter the price of dozen of mangoes:");
    scanf("%f",&dozen);
    printf("Enter the number of mangoes:");
    scanf("%d",&n);
    result=dozen/12;
    price=n*result;
    printf("The price is:%f",price);
    return 0;
    
}