/*WAP to find area and perimeter of reactangle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int l,b,area,perimeter;
    printf("Enter the length of reactangle:");
    scanf("%d",&l);
    printf("Enter the breadth of reactangle:");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of reactangle is:%d\n",area);
    printf("The perimeter of reactangle is:%d",perimeter);
    return 0;
}