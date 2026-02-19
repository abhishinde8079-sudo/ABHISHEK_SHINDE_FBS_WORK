#include<stdio.h>
int main()
{
    int num,res,sum;
    printf("enter your no: ");
    scanf("%d",&num);
    
    while (num>0)
    {
    	res=num%10;
    	sum=sum+res;
    	num=num/10;
	}
	printf("sum off digits is:%d",sum);
	return 0;
	
}