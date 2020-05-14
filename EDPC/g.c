#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define lli long long int

#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct s_path
{
	lli start;
	lli end;
	lli len;
} t_path;

int main(void)
{
	lli n, m;

	scanf ("%lld %lld",&n, &m);

	lli x[m],y[m];
	t_path list[m];
	lli index = 0;
	while (index < m)
	{
		scanf("%lld %lld",&(x[index]),&(y[index]));
		list[index].start = x[index];
		list[index].end = y[index];
		list[index].len = 1;
		index++;
	}
	lli dp[n+1][n+1];
	lli i = 0;
	lli j = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			dp[i][j] = 0;
			j++;
		}
		i++;
	}
	lli max = 0;
	lli p_max = 0;
	i = 1;
	while (i <= m)
	{
		if (dp[x[i-1]][y[i-1]] == 0)
			dp[x[i-1]][y[i-1]] = 1;
		j = 1;
		while (j <= n)
		{
			if(dp[j][x[i-1]] != 0)
				dp[j][x[i-1]]++;
			if(dp[y[i-1]][j] != 0)
				dp[y[i-1]][j]++;
			p_max = MAX(dp[j][x[i-1]],dp[y[i-1]][j]);
			max = MAX(p_max, max);
			j++;
		}
		i++;
	}
	printf("%lld\n",max);
	return (0);
}
