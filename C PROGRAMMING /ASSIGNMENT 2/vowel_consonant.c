// check given character is a vowel or consonant.
#include<stdio.h>
void main()
{
	char ch='a';
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}