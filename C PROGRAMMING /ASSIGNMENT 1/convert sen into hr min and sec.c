// convert sen into the hr,min,sec
#include<stdio.h>
int main()
{
	int total_sec,hr,min,sec;
	printf("Enter your second: ");
	scanf("%d",&total_sec);
	
	hr=total_sec/3600;
	min=(total_sec%3600)/60;
	sec=total_sec%60;
	
	printf("total sec after converting hr=%d,min=%d and sec=%d",hr,min,sec);
	return 0;
}