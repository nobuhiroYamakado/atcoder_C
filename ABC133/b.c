#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int sqdis(int *a, int *b, int d)
{
	int i = 0;
	int sum = 0;
	while (i < d)
	{
		sum += (a[i]-b[i])*(a[i]-b[i]);
		i++;
	}
	return(sum);
}

int main(void)
{
	int n, d;
	scanf("%d %d",&n, &d);
	int **x;
	x = (int **)malloc(sizeof(int *)*(n));
	int i = 0;
	int j = 0;
	double sq = 0;
	double tmp = 0;
	while (i < n)
	{
		x[i] = (int *)malloc(sizeof(int)*(d));
		j = 0;
		while (j < d)
		{
			scanf("%d",&(x[i][j]));
			j++;
		}
		i++;
	}

	i = 0;
	j = 0;
	int sum = 0;
	double integer;
	while (i < n - 1)
	{
		j = i + 1;
		while(j < n)
		{
			tmp = (double)sqdis(x[i],x[j],d);
			sq = sqrt(tmp);
			if(modf(sq, &integer) == 0.0)
			{
				sum++;
				//printf("debug i:%d, j:%d sq:%.4f, tmp:%.4f\n",i,j,sq,tmp);
			}
			j++;
		}
		i++;
	}
	printf("%d\n",sum);
	return (0);
}
