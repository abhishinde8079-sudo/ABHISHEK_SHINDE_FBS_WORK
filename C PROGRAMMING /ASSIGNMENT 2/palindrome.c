//check 3 digit number is pallindrome or not.
#include<stdio.h>
void main()
{
	int num,a,b,c,d,rew;
	num=121;
	a=num%10;
	b=num/10;
	c=b%10;
	d=b/10;
	rew=1*100+2*10+1;

	if(num==rew)
	{
		printf("this num is pallindrome");
	}
	else
	{
		printf("this num is not pallindrome");
	}
	return 0;
}