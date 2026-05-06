#include<stdio.h>
int main()
{
	float html,c,cpp,css,java,python;
	float total_mark,average_mark;
	printf("Enter your html subject marks: ");
	scanf("%f",&html);
	printf("Enter your c subject marks: ");
	scanf("%f",&c);
	printf("Enter your cpp subject marks: ");
	scanf("%f",&cpp);
	printf("Enter your css subject marks: ");
	scanf("%f",&css);
	printf("Enter your java subject marks: ");
	scanf("%f",&java);
	printf("Enter your python subject marks: ");
	scanf("%f",&python);
	
	total_mark=html+c+cpp+css+java+python;
	
	average_mark=(html+c+cpp+css+java+python)/6;
	
	printf("total mark is=%.2f \n",total_mark);
	
	printf("average mark is=%.2f",average_mark);
	
}