#include<stdio.h>
int main()
{
	int num;
	printf("Enter your no to check it is prime or not: ");
	scanf("%d",&num);
	
	if(num<2)
	{
		printf("it is not a prime no");
		return 0;
	}
	else
	{
		for(int i=2;i<=num-1;i++)
		{
			if(num%i==0)
			{
				printf("it is not a prime no");
				return 0;
			}
		}
	}
	printf("it is a prime no");
	return 0;
	
}