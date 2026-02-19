#include<stdio.h>

int main()
{
    int num,i;
    printf("enter your no to print table: ");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
    	printf("%d*%d=%d \n",num,i,i*num);
	}
    
    return 0;
}
