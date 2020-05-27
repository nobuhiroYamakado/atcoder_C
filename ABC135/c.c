#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define lli long long int
int main(void)
{
	lli n;
	scanf("%lld", &n);
	lli *a;
	lli *b;
	a = (lli *)malloc(sizeof(lli)*(n+1));
	b = (lli *)malloc(sizeof(lli)*(n+1));
	lli i = 0;
	while (i < n+1)
	{
		scanf("%lld",&a[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		scanf("%lld",&b[i]);
		i++;
	}
	i = 0;
	lli tmp = 0;
	lli sum = 0;
	while (i < n)
	{
		if (a[i] > b[i])
		{
			tmp = b[i];
		}
		else if (a[i] + a[i+1] > b[i])
		{
			tmp = b[i];
			a[i+1] = a[i+1] - (b[i] - a[i]);
		}
		else
		{
			tmp = a[i] + a[i+1];
			a[i+1] = 0;
		}
		sum += tmp;
		i++;
	}
	printf("%lld\n",sum);
	return (0);
}
