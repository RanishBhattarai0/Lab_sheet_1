/*WAP to find simple interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int P,t;
    float r,A;
    printf("Enter the initial Principal balence:");
    scanf("%d",&P);
    printf("Enter the intrest rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%d",&t);
    A=P*pow((1+r/100),t);
    printf("The final amount is:%f",A);
    return 0;
}