#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, l;
	scanf("%d %d", &n, &l);
	int i = 1;
	int sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	if ( l >= 0)
	{
		printf("%d\n", n*l - n + sum - l);
	}
	else if (-1*l >= n)
	{
		printf("%d\n", n*l - n + sum - (l+n-1));
	}
	else
	{
		printf("%d\n", n*l - n + sum );
	}
	return (0);
}

