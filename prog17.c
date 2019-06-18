#include<stdio.h>
#include<math.h>
int main()
{
	int a,rem,s=0,c=0,b,d;
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		b=b/10;
		c=c+1;
	}
	d=a;
	while(a!=0)
	{
		rem=a%10;
		s=s+pow(rem,c);
		a=a/10;
	}
	if(d==s)
	   printf("yes");
	else
	   printf("no");   
	return 0;   
}
