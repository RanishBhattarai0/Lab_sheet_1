/*Wap to perform Mathematics Operation*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float num1;
    float num2;
    char op;
    float result;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the operation Character:");
    scanf(" %c",&op);
    printf("Enter the second number:");
    scanf("%f",&num2);
        switch(op)
    {
    	case '-':
    		result=num1-num2;
    			printf("The substraction is:%f",result);
    			break;
    	case '+':
    		result=num1+num2;
    			printf("The sum is:%f",result);
    			break;
        case '*':
    		result=num1*num2;
    			printf("The multipication is:%f",result);
    			break;
    	case '/':
    		result=num1/num2;
    			printf("The division is:%f",result);
    			break;
    	default:
    		printf("The operator is not valid:");
    }
    return 0;
}