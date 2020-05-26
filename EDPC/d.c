#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>

#define lli long long int

#define MAX(A,B) (((A)>(B))?(A):(B))
typedef struct s_item
{
	lli w;
	lli v;
	lli sumw;
	lli sumv;
}	t_item;
int main (void)
{
	lli n, w;
	scanf("%lld %lld", &n, &w);

	lli index = 0;
	t_item items[n];
	lli dp[n+1][w+1];
	while (index < n)
	{
		scanf("%lld %lld",&(items[index].w),&(items[index].v));
		items[index].sumw = items[index].w;
		items[index].sumv = items[index].v;
		index++;
	}
	
	lli j = 0;
	index=0;
	while (j < w +1)
	{
		dp[0][j] = 0;
		j++;
	}
	index = 1;
	while (index < n+1)
	{
		j = 0;
		while (j < w+1)
		{
			if(j - items[index-1].w >= 0)
			{
				dp[index][j] = MAX(dp[index-1][j], dp[index-1][j-items[index-1].w]+items[index-1].v);
			}
			else
			{
				dp[index][j] = dp[index-1][j];
			}
			j++;
		}
		index++;
	}
	printf("%lld\n", dp[n][w]);
	return(0);
}

