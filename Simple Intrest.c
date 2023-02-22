/*WAP to find simple intrest*/
#include<stdio.h>
int main()
{

    int p,n;
    float r,si;
    printf("Enter the Principal:");
    scanf("%d",&p);
    printf("Enter the time period:");
    scanf("%d",&n);
    printf("Enter the rate:");
    scanf("%f",&r);
/*formula of simple intrest*/
    si=p*n*r/100;
    printf("The Simple Intrest is:%f",si);
    return 0;
}