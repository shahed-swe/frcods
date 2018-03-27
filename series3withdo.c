#include <stdio.h>
unsigned long factorial(int num)
{
	int i;
	unsigned long fact = 1;
	i = num;
	do{
		fact = fact * i;
		i--;
	}while( i >= 1);
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
	do{
		sum = sum + ((float)(i)/(float)(factorial(i)));
		i++;
	}while (i <= n);
	printf("Sum of the series is: %f\n",sum);
	return 0;
}
