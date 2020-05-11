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
	lli val_sum = 0;
	lli index = 0;
	while (index < n)
	{
		scanf("%lld %lld",&(we[index]),&(va[index]));
		val_sum += va[index];
		index++;
	}
	lli dp[n+1][val_sum+1];
	index = 0;
	while (index < val_sum+1)
	{
		dp[0][index] = 2000*1000*1000;
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
		while (j < val_sum + 1)
		{
			if (j - va[i-1] >= 0 && dp[i-1][j] > we[i-1] + dp[i-1][j-va[i-1]])
			{
				dp[i][j] = dp[i-1][j-va[i-1]] + we[i-1];
				//printf("dp:%lld, i: %lld, j:%lld\n",dp[i][j], i, j);
			}
			else if (j - va[i-1] < 0 && dp[i-1][j] > we[i-1])
			{
				dp[i][j] = we[i-1];
				//printf("dp:%lld, i: %lld, j:%lld\n",dp[i][j], i, j);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
				//printf("dp:%lld, i: %lld, j:%lld\n",dp[i][j], i, j);
			}
			j++;
		}
		i++;
	}
	index = 0;
	while (index < val_sum)
	{
		if (w < dp[n][index])
		{
			printf("%lld\n",index-1);
			return (0);
		}
		index++;
	}
	printf("%lld\n",val_sum);
	return (0);
}
