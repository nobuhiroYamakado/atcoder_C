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
	lli dp[m+1];
	lli i = 2;
	lli j = 0;
	dp[0] = 0;
	dp[1] = 1;
	index = 2;
	while (index <= m)
	{
		dp[index] = 0;
		index++;
	}
	while (i <= m)
	{
		j = 0;
		while (j < i)
		{
			//printf("list_s;%lld, e;%lld, i;%lld, j;%lld\n",list[j].start,list[j].end,i,j);
			if ((list[j].start == list[i-1].end)
					&&(list[j].len == dp[i-1]))
			{
				dp[i] = dp[i-1] + 1;
				list[j].start = list[i-1].start;
				list[j].len++;
				//printf("case1, i;%lld, j;%lld, dp[i];%lld\n",i,j,dp[i]);
			}
			else if ((list[j].end == list[i-1].start)
					&&(list[j].len == dp[i-1]))
			{
				dp[i] = dp[i-1] + 1;
				list[j].end = list[i-1].end;
				list[j].len++;
				//printf("case2, i;%lld, j;%lld, dp[i];%lld\n",i,j,dp[i]);
			}
			else if (list[j].end == list[i-1].start)
			{
				list[j].end = list[i-1].end;
				list[j].len++;
				dp[i] = MAX(dp[i-1],dp[i]);
				//printf("case3, i;%lld, j;%lld, dp[i];%lld\n",i,j,dp[i]);
			}
			else if (list[j].end == list[i-1].start)
			{
				list[j].end = list[i-1].end;
				list[j].len++;
				dp[i] = MAX(dp[i-1],dp[i]);
				//printf("case4, i;%lld, j;%lld, dp[i];%lld\n",i,j,dp[i]);
			}
			else
			{
				dp[i] = MAX(dp[i-1],dp[i]);
				//printf("case5, i;%lld, j;%lld, dp[i];%lld\n",i,j,dp[i]);
			}
			j++;
		}
		i++;
	}
	index = 0;
	while (index < m)
	{
		if (dp[i-1] == list[index].len)
		{
			printf("%lld\n",dp[i-1]);
			return (0);
		}
		index++;
	}
	return (0);
}
