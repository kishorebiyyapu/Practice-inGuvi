#include<stdio.h>
int main()
{
	int a,b,c,s,i,rem;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		s=0;
		c=i;
		while(c!=0)
		{
			rem=c%10;
			s=s+(rem*rem*rem);
			c=c/10;
		}
		if(i==s)
		{
		   printf("%d ",i);
	    }
	
	}
	return 0;
}
