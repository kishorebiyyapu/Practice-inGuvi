#include<stdio.h>
int main()
{
	int N,a,b,s=0;
	scanf("%d",&N);
	a=N;
	while(a!=0)
	{
		b=a%10;
		s=s*10+b;
		a=a/10;
	}
	if(N==s)
	   printf("yes");
	else
	   printf("no");   
}
