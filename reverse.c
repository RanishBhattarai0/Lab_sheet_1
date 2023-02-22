/*WAP to print a six digit integer in reverse*/
#include<stdio.h>
int main()
{
   long int n,rev,c;
    printf("Enter any six digit number:");
    scanf("%ld",&n);
    c=n%100000%10000%1000;
    rev=(n/100000)+(n%100000/10000)*10+(n%100000%10000/1000)*100+(c/100)*1000+(c%100/10)*10000+(c%100%10)*100000;
    printf("The reverse of %ld is %ld",n,rev);
    return 0;
}