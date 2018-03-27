#include <stdio.h>
int main()
{
	int m[10],k[10],i,sum = 0,sub = 0,p;
	scanf("%d",&p);
	for(i = 0;i < p;i++)
	{
		scanf("%d",&m[i]);
		sum = sum + m[i];
	}
	for(i = 0;i < p - 1;i++)
	{
		scanf("%d",&k[i]);
		sub = sum - k[i];
	}
	
	printf("sum :%d\n",sum);
	printf("sub :%d",sub);
	return 0;
}
