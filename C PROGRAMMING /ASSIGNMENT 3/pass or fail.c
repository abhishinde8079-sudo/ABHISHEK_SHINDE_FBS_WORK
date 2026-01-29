//grade according to mark
#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your mark: ");
	scanf("%d",&mark);
	if (mark>75)
	{
	   printf("passing with Distinction");	
	}
	else if (mark>65)
	{
		printf("passing with First Class");
		
	}
	else if (mark>55)
	{
		printf("passing with second Class");
		
	}
	else if (mark>=40)
	{
		printf("passing with pass Class");
		
	}
	else 
	{
		printf("fail");
		
	}
	return 0;
	
}