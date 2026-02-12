// convert days into year ,week and days 
#include<stdio.h>
int main()
{
	int total_days,year,weak,days;
	printf("Enter your second: ");
	scanf("%d",&total_days);
	
	year=total_days/356;
	weak=(total_days%356)/7;
	days=(total_days%356)%7;
	
	printf("total days after converting year=%d,weak=%d and days=%d",year,weak,days);
	return 0;
	
}
