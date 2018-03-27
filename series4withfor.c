#include <stdio.h>
int main()
{
	int i,n;
	double sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	sum = 0.0;
	for(i = 1;i <= n;i++)
	{
		sum = sum + ((float)1/(float)i);
	}
	printf("Sum of the series is: %f\n",sum);
	return 0;
}
