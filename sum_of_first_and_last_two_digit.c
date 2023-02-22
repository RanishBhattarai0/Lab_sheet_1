/*Write a program to input any 4 digit number and find the sum of first and last two numbers.*/
#include<stdio.h>
int main()
{
    int num,resultf,results,sum;
    printf("Enter any 4 digit number:");
    scanf("%d",&num);
    resultf=num/100;
    results=num%100;
    sum=resultf+results;
    printf("The sum of first and last two digit is:%d",sum);
    return 0;
}