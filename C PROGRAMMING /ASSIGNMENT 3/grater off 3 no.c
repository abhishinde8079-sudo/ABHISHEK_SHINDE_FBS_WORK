//greatest of three numbers using nested if-else.
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf(" Enter your first no:");
	scanf(" %d",&num1);
	
	printf(" Enter your second no:");
	scanf(" %d",&num2);
	
	printf(" Enter your thrid no:");
	scanf(" %d",&num3);
	
	if(num1>num2&&num1>num3)
	{
		printf("first no is grater");
	}
	else if(num2>num1&&num2>num3)
	{
		printf("second no is grater");
	}
	else
	{
		printf("third no is grater");
	}
	return 0;
	
}