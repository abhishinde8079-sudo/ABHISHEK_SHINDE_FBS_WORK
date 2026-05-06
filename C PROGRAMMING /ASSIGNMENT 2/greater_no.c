#include<stdio.h>
int main() {
	int num1,num2;
	printf("Enter your num1 and num2 to check which is greater: ");
	scanf("%d %d",&num1,&num2);

	if(num1>num2)
		printf("first no is greater than second no");
	else
		printf("second no is greater than first no");

	return 0;
}