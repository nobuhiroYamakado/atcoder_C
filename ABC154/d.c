#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define lli long long int
#define llf long double

int main(void)
{
	lli k, n;
	scanf("%lld %lld",&n, &k);

	lli p[n];
	lli index =0;
	lli sum = 0;
	while (index <n)
	{
		scanf("%lld", &p[index]);
		p[index] = p[index] + 1;
		sum = sum + p[index];
		index++;
	}

	llf output = 0;
	lli chunk_sum = 0;
	lli chunk_max = 0;
	index = 0;
	while (index < k)
	{
		chunk_sum = chunk_sum + p[index];

		index++;
	}
	chunk_max = chunk_sum;
	while (index < n)
	{
		chunk_sum = chunk_sum + p[index] - p[index-k];
		if (chunk_sum > chunk_max)
		{
			chunk_max = chunk_sum;
		}
		index++;
	}
	output = chunk_max / 2.0;
	printf("%.12Lf\n", output);
	return (0);


}
