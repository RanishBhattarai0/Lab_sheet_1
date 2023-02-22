#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int p,n;
    float r,Total;
    printf("Enter the deposited amount:");
    scanf("%d",&p);
    printf("Enter the number of year of deposition:");
    scanf("%d",&n);
    printf("Enter the rate bank have provided to you:");
    scanf("%f",&r);
    Total=p*pow(1+r/100,n);
    printf("The total amount you get is:%f",Total);
    return 0;

}