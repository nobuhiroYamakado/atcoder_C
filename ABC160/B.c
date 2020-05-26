#include <stdio.h>

int	main(void)
{
	long long int x;
	scanf("%lld",&x);
	long long int hap=0;
	hap = ((x/500)*1000) + ((x%500)/5)*5;
	printf("%lld\n",hap);
	return (0);
}
