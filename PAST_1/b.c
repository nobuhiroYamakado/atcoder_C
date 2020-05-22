#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define lli long long int

int main(void)
{
	lli n;
	scanf("%lld", &n);
	lli *a;
	a = (lli *)malloc(sizeof(lli)*(n+2));
	lli i = 0;
	while (i < n)
	{
		scanf("%lld",&(a[i]));
		i++;
	}
	i = 1;
	while (i < n)
	{
		if(a[i-1] == a[i])
		{
			printf("stay\n");
		}
		else if (a[i-1] > a[i])
		{
			printf("down %lld\n",a[i-1]-a[i]);
		}
		else
		{
			printf("up %lld\n", a[i] - a[i-1]);
		}
		i++;
	}
	return(0);
}
