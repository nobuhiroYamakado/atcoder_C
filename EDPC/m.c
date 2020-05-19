#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007
#define lli long long int

int main(void)
{
	lli n, k;
	scanf("%lld %lld",&n, &k);
	
	lli *a;
	a = (lli *)malloc(sizeof(lli)*(n+2));
	lli i =0;
	lli j =0;
	while (i < n)
	{
		scanf("%lld",&(a[i]));
		i++;
	}
	i =0;
	j =0;
	lli **dp;

	dp = (lli **)malloc(sizeof(lli *)*(n+2));

	while (i <= n)
	{
		dp[i] = (lli *)malloc(sizeof(lli)*(k+2));
		j = 0;
		while (j < k+2)
		{
			dp[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (i < k)
	{
		if (i <= a[0])
			dp[1][i] = 1;
		i++;
	}
	
	i = 2;
	j = 1;
	lli h = 0;
	while (i <= n)
	{
		j = 0;
	//	printf("debug i:%lld, j:%lld\n", i, j);
		while ( j <= k)
		{
			h = 0;
			while (h <= a[i-1] && h <= j)
				{
					dp[i][j] += dp[i-1][j-h] ;
					dp[i][j] = dp[i][j]%MOD;
	//				printf("debug i:%lld, j:%lld, dp;%lld\n", i, j, dp[i][j]);
					h++;
				}
			j++;
		}
		i++;
	}
	
	printf("%lld\n",dp[n][k]);

	return (0);
}
