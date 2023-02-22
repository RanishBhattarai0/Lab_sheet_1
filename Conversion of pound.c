/*WAP to convert pounds to kilogram*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int pound;
    float kilogram;
    printf("Enter the weight in pound:");
    scanf("%d",&pound);
    kilogram=pound/2.2;
    printf("The weight in kilogram is:%f",kilogram);
    return 0;
}