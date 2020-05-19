#include <stdio.h>
#include <stdlib.h>


void print_winner(int i)
{
	if (i == 1)
		printf("First\n");
	else
		printf("Second\n");
	return;
}
int main(void)
{
	int n, k;
	scanf("%d %d",&n, &k);

	int *a;
	a = (int *)malloc(sizeof(int)*(n+1));

	int *dp;
	dp = (int *)malloc(sizeof(int*)*(k+1));
	int i = 0;
	int j = 0;
	while (i < n)
	{
		//dp[i] = (int *)malloc(sizeof(int)*(k+1));
		scanf("%d",&(a[i]));
		i++;
	}
	i = 0;
	j = 0;

	//dp[0][0]=0;
	i = 0;
	j = 0;
	while (i <= k)
	{
		dp[i] = 0;
		j = 0;
		while (j < n)
		{
			if (i-a[j] == 0)
			{
				dp[i] = 1;
				break;
			}
			else if(i-a[j] > 0 && dp[i-a[j]] == 0)
			{
				dp[i] = 1;
				break;
			}
			j++;
		}
		i++;
	}
	print_winner(dp[k]);
	return (0);
}
