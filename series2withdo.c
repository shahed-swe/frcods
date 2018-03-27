#include <stdio.h>
int main()
{
	int i,n;
	unsigned long sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	sum = 0;
	i = 1;
	do{
		sum = sum + (i * i);
		i++;
	}while(i<=n);
	printf("Sum of the series is: %ld\n",sum);
	return 0;
}
