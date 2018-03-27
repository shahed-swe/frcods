#include <stdio.h>
int main()
{
	int row,space,col,n;
	scanf("%d",&n);
	for(row = 1;row <= n;row++)
	{
		for(space = 1;space <= n - row;space++)
		{
			printf(" ");
		}
		for(col = (2 * row) - 1;col > 0;col--)
		{
			printf("%c",col+64);
		}
		printf("\n");
	}
	return 0;
}
