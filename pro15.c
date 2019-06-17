#include<stdio.h>
int main()
{
	int N,Q,i,c[100],j,d=0;
	scanf("%d",&N);
	scanf("%d",&Q);
	for(i=N+1;i<Q;i++)
	{
		if(i%2==0)
		{
			c[d]=i;
			d=d+1;
		}
	}
	for(j=0;j<d;j++)
	{
		printf("%d ",c[j]);
	}
}
