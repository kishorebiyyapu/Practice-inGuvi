#include<stdio.h>
int main()
{
	int a,b,i,j,flag=0;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a+1;i<b;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			else
			   flag=0;
		}
		if(flag==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
