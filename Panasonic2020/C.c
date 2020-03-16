#include <stdio.h>
#include <math.h>

int	main(void)
{
	long long int a,b,c;

	scanf("%lld %lld %lld", &a, &b, &c);

	if ((a+b)*2 < c)
	{
		printf("Yes");
	}
	else if (c-a-b < 0)
	{
		printf("No");
	}
	else if (pow(a,2)+pow(b,2)+pow(c,2)-2*(a*b)-2*(b*c)-2*(c*a)>0)
		{
			printf("Yes");
		}
	else
		printf("No");

	return(0);
}
