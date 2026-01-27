//basic salary calculate
#include<stdio.h>
int main()
 {
 	double bs;
 	bs=4000;
 	double da,ta,hr,tr;
 	if(bs<5000)
 	{
 	da=bs*0.10;
 	ta=bs*0.20;
 	hr=bs*0.30;
 	tr=da+ta+hr+bs;
 	printf("%lf",tr);
	}
	else{
	da=bs*0.15;
 	ta=bs*0.25;
 	hr=bs*0.35;
 	tr=da+ta+hr+bs;
 	printf("%lf",tr);
	}
	return 0;
	
 }