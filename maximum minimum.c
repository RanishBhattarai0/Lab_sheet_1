/*WAP to find maximum and miniimum of two numbers using conditional operator*/
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    result=(num1>num2)?num1:num2;
    printf("Maximum number=%d",result);
    return 0;

}