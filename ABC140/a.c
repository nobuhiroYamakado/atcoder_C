#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int int_pow(int a, int b)
{
	int r = 1;
	int i = 0;
	while (i < b)
	{
		r = r*a;
		i++;
	}
	return(r);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",int_pow(n,3));
	return(0);
}
