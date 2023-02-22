/*WAP to find area and circumference of circle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159 
int main()
{
    float radius,area,cf;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=PI*pow(radius,2);
    cf=2*PI*radius;
    printf("The area is:%f\n",area);
    printf("The circumference is:%f",cf);
    return 0;

}