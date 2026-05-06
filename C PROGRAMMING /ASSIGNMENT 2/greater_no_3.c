#include<stdio.h>
int main() {
	int num1,num2,num3;
	printf("Enter your num1 ,num2 and num3 to check which is greater: ");
	scanf("%d %d %d",&num1, &num2, &num3);
 
	if(num1>num2&&num1>num3)
		printf("first no is greater than second no and third no");
	else if(num2>num1&&num2>num3)
		printf("second no is greater than first no and third no ");
	else
	    printf("third no is greater than first no and second no ");
	

	return 0;
}