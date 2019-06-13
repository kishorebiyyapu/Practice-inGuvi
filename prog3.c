#include<stdio.h>
int main()
{
	char n,a[5]={'a','e','i','o','u'};
	int i,flag=0;
	scanf("%c",&n);
	if(n>='a'&&n<='z')
	{
		for(i=0;i<5;i++)
		{
			if(n==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
	    {
		printf("Vowel");
	    }
	    else
	    {
		printf("Consonant");
	    }
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
