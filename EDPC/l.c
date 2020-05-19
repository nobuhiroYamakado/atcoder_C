#include <stdio.h>
#include <stdlib.h>

#define lli long long int
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int main(void)
{
	lli n;
	scanf("%lld", &n);
	lli sign = n%2;
	lli *a;
	a = (lli *)malloc(sizeof(lli)*(n+1));

	lli i,j,k;
	i = 0;
	j = 0;
	k = 0;
	
	while (i < n)
	{
		scanf("%lld",&(a[i]));
		i++;
	}
	lli **dp;
	i = 0;
	j = 0;
	dp = (lli **)malloc(sizeof(lli *)*(n + 1));
	while (i <= n)
	{
		dp[i] = (lli *)malloc(sizeof(lli)*(n+1));
		j = 0;
		while (j <= n)
		{
			dp[i][j] = 0;
			j++;
		}
		i++;
	}

	i =1;
	j =0;
	k =0;

	while (i <= n)//length
	{
		j = 0;
		while (j <= n-i)//start
		{
			if ((sign + i)%2 == 0)
			{
				dp[i][j] = MAX(dp[i-1][j]+a[j+i-1],dp[i-1][j+1]+a[j]);
				//printf("debug00100\n");
			}
			else
			{
				dp[i][j] = MIN(dp[i-1][j]-a[j+i-1],dp[i-1][j+1]-a[j]);
				//printf("debug00200\n");
			}
			j++;
		}
		i++;
	}

	printf("%lld\n",dp[n][0]);


	return (0);
}
