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
	else if (sqrt(a) + sqrt(b) < sqrt(c))
	{
		printf("Yes");
	}
	else if (pow(a,2) + pow(b,2) + 2*sqrtl(a*b) < pow(a+b,2))
		printf("Yes");
	else
		printf("No");

	return(0);
}
