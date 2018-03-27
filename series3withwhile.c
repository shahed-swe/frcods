#include <stdio.h>
unsigned long factorial(int num)
{
	int i;
	unsigned long fact = 1;
	i = num;
	while(i >= 1)
	{
		fact = fact * i;
		i--;
	}
	return fact;
}
int main()
{
	int i,n;
	float sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	sum = 0.0f;
	i = 1;
	while(i <= n)
	{
		sum = sum + ((float)(i)/(float)((factorial)(i)));
		i++;
		
	}
	printf("Sum of the series is: %f\n",sum);
	return 0;
}
