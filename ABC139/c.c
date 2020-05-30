#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define lli long long int

int main(void)
{
	lli n;
	scanf("%lld",&n);
	
	lli *h;
	h = (lli *)malloc(sizeof(lli)*(n));
	lli i = 0;
	while (i < n)
	{
		scanf("%lld",&h[i]);
		i++;
	}
	i = 0;
	lli max = 0;
	lli tmp_step = 0;
	while (i < n-1)
	{
		if(h[i] < h[i+1])
		{
			if(max < tmp_step)
			{
				max = tmp_step;
			}
			tmp_step = 0;
		}
		else
		{
			tmp_step++;
			if(max < tmp_step)
			{
				max = tmp_step;
			}
		}
		//printf("max:%lld, tmp:%lld\n",max,tmp_step);
		i++;
	}
	printf("%lld\n",max);
	return(0);
}
