#include<stdio.h>
int main()
{
	char n;
	int i;
	scanf("%c",&n);
	if(n>='a'&&n<='z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}
