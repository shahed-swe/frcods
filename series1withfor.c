#include <stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	sum = 0;
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("Sum of the series is : %d\n",sum);
	return 0;
}
