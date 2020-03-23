#include <stdio.h>
#include <math.h>

int	main(void)
{
	long long int N, K;
	scanf("%lld %lld", &N, &K);
	long long int index =0;
	while(N!=0)
	{
		N = N/K;
		index++;
	}
	printf("%lld\n", index);
	return (0);
}
