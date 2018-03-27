#include <stdio.h>
int main()
{
	int i,n;
	unsigned long sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	sum = 0;
	i = 1;
	while(i<=n)
	{
		sum = sum + (i * i);
		i++;
	}
	printf("Sum of the series is: %ld\n",sum);
	return 0;
}
