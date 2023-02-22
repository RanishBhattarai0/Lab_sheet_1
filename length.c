/*WAP to express a length given in millimeter in meters and centimeters*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,centimeter,meter;
    printf("Enter the length in milimeter:");
    scanf("%f",&length);
    centimeter=length/10;
    meter=length/1000;
    printf("The length in centimeter is:%f\n",centimeter);
    printf("The result in meter is:%f",meter);
    return 0;

}