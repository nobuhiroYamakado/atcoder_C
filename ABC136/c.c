#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define lli long long int

int main(void)
{
	lli n;
	scanf("%lld",&n);
	lli *h;
	h = (lli *)malloc(sizeof(lli)*(n));
	lli i = 0;
	while(i < n)
	{
		scanf("%lld",&h[i]);
		i++;
	}
	i = n-1;
	lli avl = 0;
	while(i > 0)
	{
		if(h[i] >= h[i-1])
		{
			i--;
			continue;
		}
		else if(h[i] == h[i-1]-1)
		{
			h[i-1]--;
			i--;
			continue;
		}
		else
		{
			avl = 1;
			break;
		}
	}
	if (avl == 1)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
	return(0);
}

