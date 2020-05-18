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

double f(int c1, int c2, int c3, int N, double ***dp, int ***memo_flag)
{
	double fans;
	if(memo_flag[c1][c2][c3] == 1)
	{
		return (dp[c1][c2][c3]);
	}
	memo_flag[c1][c2][c3] = 1;
	fans = 1/(1-((double)(N-c1-c2-c3)/N));
	//printf("fan:%.4lf, c1:%d, c2:%d, c3:%d, N:%d\n",fans,c1,c2,c3,N);
	if(c1>0)
	{
		fans += f(c1-1,c2,c3,N,dp,memo_flag)*c1/N/(1-(double)(N-c1-c2-c3)/N);
	}
	if(c2>0)
	{
		fans += f(c1+1,c2-1,c3,N,dp,memo_flag)*c2/N/(1-(double)(N-c1-c2-c3)/N);
	}
	if(c3>0)
	{
		fans += f(c1,c2+1,c3-1,N,dp,memo_flag)*c3/N/(1-(double)(N-c1-c2-c3)/N);
	}
	return (dp[c1][c2][c3]=fans);
}
int main(void)
{
	int ***memo_flag;
	double ***dp;
	int n;
	int *a;
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int)*(n+1));
	int i,j,k,l;
	int sum;
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	
	while (i < n)
	{
		scanf("%d",&(a[i]));
		i++;
	}
	i = 0;
	j = 0;
	memo_flag = (int***)malloc(sizeof(int **)*(301));
	dp = (double ***)malloc(sizeof(double **)*(301));
	while (i < 301)
	{
		memo_flag[i] = (int **)malloc(sizeof(int *)*(301));
		dp[i] = (double **)malloc(sizeof(double *)*(301));
		j = 0;
		while (j < 301)
		{
			memo_flag[i][j] = (int*)malloc(sizeof(int)*(301));
			dp[i][j] = (double*)malloc(sizeof(double)*(301));
			k = 0;
			while (k < 301)
			{
				memo_flag[i][j][k] = 0;
				dp[i][j][k] = 0;
				k++;
			}
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	k = 0;
	int c[4];
	c[0] = 0;
	c[1] = 0;
	c[2] = 0;
	c[3] = 0;
	while (i<n)
	{
		c[a[i]]++;
		i++;
	}
	memo_flag[0][0][0] = 1;
	double ans = f(c[1],c[2],c[3],n,dp,memo_flag);
	//printf("c1:%d, c2:%d, c3:%d, n;%d\n",c[1],c[2],c[3],n);
	printf("%.14lf\n",ans);
	return (0);
}
