#include <stdio.h>
#include <math.h>

int	main(void)
{
	long long int a,b,c;

	scanf("%lld %lld %lld", &a, &b, &c);
	long long int d = c - a - b;
	if (d <= 0)
	{
		printf("No");
	}
	else if (d*d > 4*a*b)
	{
		printf("Yes");
	}
	else
		printf("No");

	return(0);
}
