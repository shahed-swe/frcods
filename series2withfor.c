#include <stdio.h>
int main()
{
	int i,n;
	unsigned long sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	sum = 0;
	for(i = 0;i<=n;i++)
	{
		sum = sum + (i * i);
	}
	printf("Sum of the series is: %ld\n",sum);
	return 0;
}
