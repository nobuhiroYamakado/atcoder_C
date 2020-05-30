#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define lli long long int

int main(void)
{
	lli n, k, q;
	scanf("%lld %lld %lld",&n,&k,&q);
	lli *a;
	a = (lli*)malloc(sizeof(lli)*(q));
	lli i = 0;
	while (i < q)
	{
		scanf("%lld",&a[i]);
		i++;
	}
	lli *p;
	p = (lli*)malloc(sizeof(lli)*(n+1));
	i = 0;
	while (i < n + 1)
	{
		p[i] = k-q;
		i++;
	}
	i = 0;
	while (i < q)
	{
		p[a[i]-1]++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		if(p[i] > 0)
			printf("Yes\n");
		else
			printf("No\n");
		i++;
	}
	return(0);
}
