//operation using input on user 
#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	
	printf("Enter you first no: ");
	scanf(" %d",&num1);
	
	printf("Enter you second no: ");
	scanf(" %d",&num2);
	
	printf("Enter your operation (+,-,*,/,%%): ");
	scanf(" %c",&op);
	
	if(op == '+')
	 {
	 	printf("addition of two no is%d",num1+num2);
	 }
	else if(op == '-')
	{
		printf("subtraction of two no is%d",num1-num2);
	}
    else if(op == '*')
	{
		printf("multiplication of two no is%d",num1*num2);
	}
	else if(op=='/')
	{
		if(num2!=0)
        printf("division of two no is%d",num1/num2);
        else
        printf("division by zero is not allow");
        
    }
    return 0;
	
}