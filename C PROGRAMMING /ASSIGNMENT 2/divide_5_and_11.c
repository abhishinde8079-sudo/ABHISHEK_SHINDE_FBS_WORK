#include<stdio.h>
int main() {
	int num;
	printf("Enter your no to check it is divided by 5 and 11: ");
	scanf("%d",&num);
	 
	if(num%5==0&&num%11==0)
	printf("no is divisble by 5 and 11");
	else
	printf("no is not divisble by 5 and 11");
	
	return 0;
}