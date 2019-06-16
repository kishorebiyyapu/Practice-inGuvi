#include<stdio.h>
int main()
{
 int i,N,K,sum=0,a[10],j;
 scanf("%d",&N);
 scanf("%d",&K);
 for(i=1;i<=N;i++)
 {
 	a[i]=i;
 }
 for(j=1;j<=K;j++)
 {
 	sum=sum+a[j];
 }
 printf("%d",sum);
return 0;
}
