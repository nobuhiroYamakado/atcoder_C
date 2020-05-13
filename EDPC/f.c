#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(a,b) ((a>b)?(a):(b))

int main()
{
	char s[3002];
	char t[3002];
	scanf("%s",s);
	scanf("%s",t);
	int len_s = strlen(s);
	int len_t = strlen(t);
	
	int **dp;
	dp = (int **)malloc(3002*sizeof(int*));
	int index = 0;
	while (index < 3002)
	{
		dp[index] = (int *)malloc(3002*sizeof(int));
		index++;
	}
	int i, j;
	index = 0;
	//printf("debug1001\n");
	while (index < 3002)
	{
		dp[0][index] = 0;
		dp[index][0] = 0;
		index++;
	}
	//printf("debug0001\n");
	i = 1;
	j = 1;
	//printf("debug0001\n");
	
	while (i <= len_s)
	{
		j = 1;
		while( j <= len_t)
		{
			if(s[i-1] == t[j-1])
			{
				dp[i][j] = dp[i-1][j-1]+1;
				//printf("debug0002,dp;%d, i;%d,j;%d\n",dp[i][j],i,j);
			}
			else
			{
				dp[i][j] = MAX(dp[i-1][j],dp[i][j-1]);
				//printf("debug0003, dp;%d,i;%d,j;%d\n",dp[i][j],i,j);
			}
			j++;
		}
		i++;
	}
	char ans[3002];
	//printf("after ans def\n");
	index = 0;
	while (index < 3002)
	{
		ans[index] = '\0';
		//printf("%d\n",index);

		index++;
	}
	//printf("before len def\n");
	int len = dp[len_s][len_t];
	i = len_s;
	j = len_t;
	//printf("before ans while loop\n");
	while (len > 0)
	{
		if(s[i-1] == t[j-1])
		{
			ans[len-1] = s[i-1];
			i--;
			j--;
			len--;
		}
		else if(dp[i][j] == dp[i-1][j])
		{
			i--;
		}
		else
		{
			j--;
		}
	}
	//printf("just before answer debug0001\n");
	printf("%s\n",ans);
	return (0);
}
