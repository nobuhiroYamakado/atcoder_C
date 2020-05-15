#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf ("%d",&n);
	double *f;
	f = (double *)malloc(sizeof(double)*n);
	int i=0;
	while (i < n)
	{
		scanf("%lf",&(f[i]));
		i++;
	}
	double **dp;
	dp = (double **)malloc(sizeof(double*)*3000);
	i = 0;
	while (i <= n)
	{
		dp[i] = (double*)malloc(sizeof(double)*3000);
		i++;
	}
	i = 0;
	dp[1][0] = 1-f[0];
	dp[1][1] = f[0];
	i = 2;
	int j = 1;
	//printf("debug00100\n");
	while (i <= n)
	{
		j = 0;
		//printf("debug00150, i;%d, j;%d\n",i,j);
		while (j <= i)
		{
			//printf("debug00151, i;%d, j;%d\n",i,j);
			if (j == 0)
			{
				//printf("debug00152, i;%d, j;%d\n",i,j);
				//printf("dp[i-1][j];%lf\n",dp[i-1][j]);
				//printf("f[i-1];%lf\n",f[i-1]);
				dp[i][j] = dp[i-1][j] * (1-f[i-1]);
				//printf("dp[i][j];%lf\n",dp[i][j]);
			}
			else if (j == i)
			{
				//printf("debug00153, i;%d, j;%d\n",i,j);
				dp[i][j] = dp[i-1][j-1] * (f[i-1]);
			}
			else
			{
				//printf("debug00154, i;%d, j;%d\n",i,j);
				dp[i][j] = dp[i-1][j-1]*f[i-1] + dp[i-1][j]*(1-f[i-1]);
			}
			//printf("debug00158, i;%d, j;%d\n",i,j);
			j++;
		}
		i++;
	}
	i = (n+1)/2;
	//printf("debug00200\n");
	double sum = 0.0;
	while (i <= n)
	{
		sum = sum + dp[n][i];
		i++;
	}
	printf("%.10lf\n",sum);
	return (0);
}
