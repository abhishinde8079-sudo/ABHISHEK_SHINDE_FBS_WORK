#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("Enter you staring no and ending no to print sum off them: ");
	scanf("%d %d",&num1,&num2);
	
	for(int i=num1;i<=num2;i++)
	{
		sum=sum+i;
	
	}
		printf("sumoff digit is=%d",sum);
	return 0;
}