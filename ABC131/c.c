#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define lli long long int
lli g(lli a, lli b)
{
	lli tmp;
	lli x = a*b;
	if (a<b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	lli r = a%b;
	while (r!=0)
	{
		a = b;
		b = r;
		r = a%b;
	}
	return (x/b);
}

lli f(lli a, lli b, lli c)
{
	if (a == b)
	{
		if (a%c == 0)
			return (1);
		return (0);
	}

	lli small = a + (c - a%c)%c;
	lli big = (b/c)*c;
	if(small == big)
		return (1);
	return(1+((big - small)/c));
}
int main(void)
{
	lli a, b, c, d;
	scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
	lli out = 0;
	lli by_c = f(a,b,c);
	lli by_d = f(a,b,d);
	//printf("debug:c:%lld\n",by_c);
	//printf("debug:d:%lld\n",by_d);

	lli e = g(c,d);
	//printf("debug:gcd:%lld\n",e);
	lli by_e = f(a,b,e);
	//printf("debug:e:%lld\n",by_e);

	out = b - a + 1;
	out = out - by_c - by_d + by_e;
	printf("%lld\n",out);
	return (0);
}
