//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter your 3 side off trangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b&&b==c)
	{
	    printf("trangle is equilateral");	
	}
	else if( a==b||b==c||a==c)
	{
		printf("trangle is isosceles");
	}
	else 
	{
		printf("trangle is scalene");
	}
	return 0;
}