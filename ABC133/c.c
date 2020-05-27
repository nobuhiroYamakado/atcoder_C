#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define lli long long int
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main (void)
{
	lli l, r;
	scanf("%lld %lld",&l,&r);
	if (l%2019 == 0 || r%2019 == 0)
	{
		printf("0\n");
		return(0);
	}
	if (r-l > 2018)
	{
		printf("0\n");
		return(0);
	}
	lli min_i, min_j;
	min_i = 2020;
	min_j = 2020;
	lli index = l;
	lli j = l;
	lli out = 2019;
	lli tmp = 0;
	while (index <= r)
	{
		j = l;
		while (j <= r)
		{
			if (index == j)
			{
				j++;
				continue;
			}
			tmp = ((index%2019)*(j%2019))%2019;
			if (tmp < out )
			{
				out = tmp;
			}
			j++;
		}
		index++;
	}
	
	printf("%lld\n",out%2019);
	return(0);
}
