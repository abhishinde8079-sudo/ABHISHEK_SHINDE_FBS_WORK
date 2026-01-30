// discount off money
#include<stdio.h>
int main() {
	double discount;
	int amount;
	char ch;

	printf("You are  student(y)or not(n): ");
	scanf(" %c",&ch);

	printf("Enter your shoping amount: ");
	scanf(" %d",&amount);

	if(ch=='y') {
		if(amount>500) {
			discount=amount*0.20;
			printf("after discount%lf\n",amount-discount);
		} else {
			discount=amount*0.10;
			printf("after discount%lf\n",amount-discount);
		}

	} else {
		if(amount>600) {
			discount=amount*0.15;
			printf("after discount%f\n",amount-discount);
		} else {
			printf("after discount%f\n",amount);
		}

	}
	return 0;
}