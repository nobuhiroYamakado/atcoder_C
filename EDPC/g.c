#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct s_path
{
	int start;
	int end;
	int len;
} t_path;

typedef struct s_vert
{
	int name;
	int *list;
	int num;
} t_vert;

int len_of_vert(int i, t_vert *vs, int *flag, int *dp)
{
	if (vs[i].num == 0)
		return (0);
	if(flag[i] != 0)
	{
		return (dp[i]);
	}
	flag[i] = 1;
	int max = 0;
	int tmp = 0;
	int index = 0;
	while (index < vs[i].num)
	{
		tmp = len_of_vert(vs[i].list[index], vs, flag, dp);
		if (max < tmp)
			max = tmp;
		index++;
	}
	dp[i] = max + 1;
	return (max + 1);
}

int main(void)
{
	int n, m;

	scanf ("%d %d",&n, &m);
	t_vert vs[n+1];
	int x[m],y[m];
	int index = 0;
	int flag[n+1];
	int dp[n+1];
	while (index < n + 1)
	{
		vs[index].num = 0;
		flag[index] = 0;
		dp[index] = 0;
		index++;
	}
	index = 0;
	while (index < m)
	{
		scanf("%d %d",&(x[index]),&(y[index]));
		vs[x[index]].num = vs[x[index]].num + 1;
		index++;
	}
	index = 0;
	while (index < n+1)
	{
		vs[index].list = (int *)malloc(sizeof(int)*(vs[index].num));
		index++;
	}
	int i = 0;
	int j = 0;
	int k[n+1];
	while (j < n+1)
	{
		k[j] = 0;
		j++;
	}
	//printf("AAA\n");
	i = 0;
	while (i < m)
	{
		//printf("i:%d\n",i);
		//printf("x[i];%d\n",x[i]);
		//printf("k[x[i]];%d\n",k[x[i]]);
		//printf("vs[x[i]].num;%d\n",vs[x[i]].num);
		if (vs[x[i]].num > k[x[i]])
		{
			vs[x[i]].list[k[x[i]]] = y[i];
			k[x[i]] = k[x[i]] + 1;
		}
		i++;
	}
	//printf("BBB\n");
	i = 1;
	j = 0;
	int max = 0;
	int p_len = 0;
	i = 0;
	while (i < n+1)
	{
		p_len = len_of_vert(i, vs, flag, dp);
		max = MAX(p_len,max);
		//printf("i;%d\n",i);
		i++;
	}
	printf("%d\n",max);
	return (0);
}
