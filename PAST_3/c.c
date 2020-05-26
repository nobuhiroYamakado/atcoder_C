#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int
#define BIG 1000000000

int main(void)
{
	lli a, r, n;
	scanf("%lld %lld %lld",&a,&r,&n);
	if (a > BIG)
	{
		printf("large\n");
		return (0);
	}
	if (r == 1)
	{
		printf("%lld\n",a);
		return (0);
	}
	if (n == 1)
	{
		printf("%lld\n",a);
		return (0);
	}

	lli i = 1;
	lli now = a;
	lli pre = a;
	while (i < n)
	{
		now = now*r;
		if(pre >= now)
		{
			printf("large\n");
			return(0);
		}
		if(now > BIG)
		{
			printf("large\n");
			return(0);
		}
		pre = now;
		i++;
	}
	printf("%lld\n",now);
	return (0);
}
