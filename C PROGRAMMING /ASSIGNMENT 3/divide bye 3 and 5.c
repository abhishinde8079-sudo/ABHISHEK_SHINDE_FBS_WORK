//Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
int main()
{
	int num;
	printf("Enter your no: ");
	scanf(" %d",&num);
	
	if(num%5==0&&num%3==0)
	{
		printf(" no is  divisible bye 3 and 5");
	}
	else if(num%5==0)
	{
		printf("no is divisible bye 5");
	}
	else if(num%3==0)
	{
		printf(" no is divisible bye 3 ");
	}
	else 
	{
		printf("no is not divisible bye 3 and 5");
	}
	return 0;
	
}