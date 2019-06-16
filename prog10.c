#include<stdio.h>
int main()
{
 int i,a,s=0;
 scanf("%d",&a);
 while(a!=0)
 {
 	a=a/10;
 	s=s+1;
 }
 printf("%d",s);
return 0;
}
