#include <stdio.h>
#include <stdlib.h>

typedef struct s_table
{
	int num_0;//0枚の皿
	int num_1;
	int num_2;
	int num_3;
	int times;
} t_table;

typedef struct s_dp
{
	double exp;
	t_table *table;
	int num_t;
} t_dp;

double expect(int num_0, int n)
{
	double r_num = num_0 / 1.0;

	return((n*1.0)/(n-r_num));
}

int main(void)
{
	int n,i,j,k,l;
	int num_0, num_1, num_2, num_3;
	num_0 = 0;
	num_1 = 0;
	num_2 = 0;
	num_3 = 0;
	scanf("%d", &n);
	int *a;
	int sum = 0;
	a = (int *)malloc(sizeof(int)*(n+1));
	i = 0;
	while (i < n)
	{
		scanf("%d",&(a[i]));
		sum = sum + a[i];
		if(a[i] == 0)
			num_0++;
		if(a[i] == 1)
			num_1++;
		if(a[i] == 2)
			num_2++;
		if(a[i] == 3)
			num_3++;
		i++;
	}
	t_dp *dp;
	dp = (t_dp *)malloc(sizeof(t_dp)*(sum+1));
	l = n;
	dp[0].exp = 1.0;
	dp[0].num_t = 0;
	dp[0].table = (t_table *)malloc(sizeof(t_table)*4);
	i = 0;
	if (num_1 > 0)
	{
		dp[0].table[i].num_0 = 1;
		dp[0].table[i].num_1 = num_1 - 1;
		dp[0].table[i].num_2 = num_2;
		dp[0].table[i].num_3 = num_3;
		
		dp[0].table[i].times = num_1;
		i++;
	}
	if (num_2 > 0)
	{
		dp[0].table[i].num_0 = 0;
		dp[0].table[i].num_1 = num_1 + 1;
		dp[0].table[i].num_2 = num_2 - 1;
		dp[0].table[i].num_3 = num_3;

		dp[0].table[i].times = num_2;
		i++;
	}
	if (num_3 > 0)
	{
		dp[0].table[i].num_0 = 0;
		dp[0].table[i].num_1 = num_1;
		dp[0].table[i].num_2 = num_2 + 1;
		dp[0].table[i].num_3 = num_3 - 1;
		
		dp[0].table[i].times = num_3;
		i++;
	}
	dp[0].num_t = i;
	i = 1;
	k = 0;
	int sum_times = 0;
	while (i < sum)
	{
		dp[i].exp = 0;
		dp[i].num_t = 0;
		dp[i].table = (t_table *)malloc(sizeof(t_table)*3*dp[i-1].num_t);
		k = 0;
		j = 0;
		sum_times = 0;
		while (j < dp[i-1].num_t)
		{
			if (dp[i-1].table[j].num_1 > 0)
			{
				dp[i].table[k].num_0 = dp[i-1].table[j].num_0 + 1;
				dp[i].table[k].num_1 = dp[i-1].table[j].num_1 - 1;
				dp[i].table[k].num_2 = dp[i-1].table[j].num_2;
				dp[i].table[k].num_3 = dp[i-1].table[j].num_3;

				dp[i].table[k].times = dp[i-1].table[j].num_1;
				k++;
			}
			if (dp[i-1].table[j].num_2 > 0)
			{
				dp[i].table[k].num_0 = dp[i-1].table[j].num_0;
				dp[i].table[k].num_1 = dp[i-1].table[j].num_1 + 1;
				dp[i].table[k].num_2 = dp[i-1].table[j].num_2 - 1;
				dp[i].table[k].num_3 = dp[i-1].table[j].num_3;

				dp[i].table[k].times = dp[i-1].table[j].num_2;
				k++;
			}
			if (dp[i-1].table[j].num_3 > 0)
			{
				dp[i].table[k].num_0 = dp[i-1].table[j].num_0;
				dp[i].table[k].num_1 = dp[i-1].table[j].num_1;
				dp[i].table[k].num_2 = dp[i-1].table[j].num_2 + 1;
				dp[i].table[k].num_3 = dp[i-1].table[j].num_3 - 1;

				dp[i].table[k].times = dp[i-1].table[j].num_3;
				k++;
			}
			dp[i].exp += expect(dp[i-1].table[j].num_0,n) * dp[i-1].table[j].times;
			//printf("j:%d, i:%d, exp:%f\n",j,i,dp[i].exp);
			//printf("num_t;%d, times:%d\n",dp[i-1].num_t, dp[i-1].table[j].times);
			sum_times += dp[i-1].table[j].times;
			j++;
		}
		dp[i].exp = dp[i].exp / sum_times;
		dp[i].num_t = k;
		if(i > 2)
		{
			free(dp[i-2].table);
		}
		i++;
	}
	i = 0;
	
	double r_num = expect(1,5);
	r_num = 0;
	while (i < sum)
	{
		r_num += dp[i].exp;
		i++;
	}
	printf("%.10lf\n",r_num);
	return (0);
}
