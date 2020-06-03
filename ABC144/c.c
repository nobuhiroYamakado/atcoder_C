#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define lli long long int

#define MIN(a,b) ((a)>(b)?(b):(a))
lli sq(lli a)
{
	lli i = 0;
	while (i*i < a)
	{
		i++;
	}
	return(i);
}
int main(void)
{
	lli n;
	scanf("%lld",&n);
	lli big = 1000003;
	big = MIN(big,sq(n));
	while (big > 1)
	{
		if(n%big == 0)
			break;
		big--;
	}
	if (big == 1)
	{
		printf("%lld\n",n-1);
		return(0);
	}
	else
	{
		printf("%lld\n", big+(n/big)-2);
		return(0);
	}
	lli i, j;
	i = 1;
	j = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if(i*j == n)
			{
				printf("%lld\n",i-1+j-1);
				return(0);
			}
			j++;
		}
		i++;
	}

	return(0);
}
