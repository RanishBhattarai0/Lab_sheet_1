/*WAP to find power of given number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num1;
    int num2;
    float result;
    printf("Enter the number:");
    scanf("%d",&num1);
    printf("Enter the power:");
    scanf("%d",&num2);
    result=pow(num1,num2);
    printf("The power of given number is:%f",result);
    return 0;
}