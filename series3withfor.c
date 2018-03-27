#include<stdio.h>
unsigned long factorial(int num)
{
	int i;
	unsigned long fact = 1;
	for (i = num;i>=1;i--){
		fact = fact * i;
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
	for(i = 1;i <= n;i++){
		sum = sum + ((float)(i)/(float)(factorial(i)));
	}
	printf("Sum of the series is: %f\n",sum);
	return 0;
}
