#include<stdio.h>
int main()
{
	int a[100],i;
	for(i=1;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[1]>=a[2] && a[1]>=a[3])
	    printf("%d",a[1]);
	else if(a[2]>=a[1] && a[2]>=a[3])
	    printf("%d",a[2]);
	else
	    printf("%d",a[3]);	    
	return 0;    

}
