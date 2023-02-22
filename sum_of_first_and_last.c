/*Write a program to input any 4 digit number and find the sum of first and last number.*/
#include<stdio.h>
int main()
{
    int num,resultf,results,sum;
    printf("Enter any 4 digit number:");
    scanf("%d",&num);
    resultf=num/1000;
    results=num%10;
    sum=resultf+results;
    printf("The sum of first and last digit is:%d",sum);
    return 0;
}
