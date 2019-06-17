#include<stdio.h>
int main()
{
	int N,K,s=1,i;
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=1;i<=K;i++)
	{
		s=s*N;
	}
	printf("%d",s);
}
