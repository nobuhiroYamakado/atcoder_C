#include <stdio.h>
#include <string.h>

int	main(void)
{
	long long int n;
	long long int a;	
	long long int b;
	long long int x;
	long long int y;

	scanf("%lld %lld %lld", &n, &a, &b);
	if (a == 0)
	{
		printf("0");
		return (0);
	}
	x = n - a - b;
	if (x == 0)
	{
		printf("%lld", a);
		return (0);
	}
	x = n % (a + b);
	x = (x > a) ? (a) : (x);
	y = n / (a + b);
	x = x + (y * a);
	printf("%lld", x);
	return (0);
}
