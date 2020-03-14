#include <stdio.h>
#include <math.h>

int	main(void)
{
	long long int a,b,c;

	scanf("%lld %lld %lld", &a, &b, &c);

	if ((a+b)*2 <= c)
	{
		printf("Yes");
	}
	else if (sqrtl(a) + sqrtl(b) < sqrtl(c))
	{
		printf("Yes");
	}
	else if (a + b + 2*sqrtl(a*b) < a+b)
		{
			printf("Yes");
		}
	else
		printf("No");

	return(0);
}
