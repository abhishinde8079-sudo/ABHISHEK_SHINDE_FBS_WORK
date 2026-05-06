#include<stdio.h>
int main()
{
	int base,power, result;
	printf("Enter your base: ");
	scanf("%d",&base);
	
	printf("Enter your power: ");
	scanf("%d",&power);
	
	for(int i=1;i<=power;i++)
	{
		result=result*base;
	}
	printf("%d",result);
	
	return 0;
	
}