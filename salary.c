#include <stdio.h>
int main()
{
	int a,i,n;
	scanf("%d%d",&n,&a);
	for(i = 1;i <= n;i=i + 2)
	{
		a = a * a * a;
		printf("%d\n",a);
		a = i;
	}
	return 0;
}
