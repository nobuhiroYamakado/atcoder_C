#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int

int main(void)
{
	lli n, w;
	scanf("%lld %lld",&n, &w);
	
	lli we[n];
	lli va[n];
	lli index = 0;
	while (index < n)
	{
		scanf("%lld %lld",&(we[index]),&(va[index]));
		index++;
	}
	lli dp[n+1][w+1];
	index = 0;
	while (index < w+1)
	{
		dp[0][index] = 0;
		index++;
	}
	index = 0;
	while (index < n+1)
	{
		dp[index][0] = 0;
		index++;
	}
	lli i,j;
	i = 1;
	j = 0;
	while (i < n+1)
	{
		j = 1;
		while (j < w + 1)
		{
			if (j-we[i-1]>=0 && va[i-1]+dp[i-1][j-we[i-1]]>dp[i-1][j])
			{
				dp[i][j] = va[i-1] + dp[i-1][j-we[i-1]];
				printf("dp:%lld, i: %lld, j:%lld\n",dp[i][j], i, j);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
			j++;
		}
		i++;
	}
	printf("%lld\n",dp[n][w]);
	return (0);
}
