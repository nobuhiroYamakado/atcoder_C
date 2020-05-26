#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int

typedef struct s_que
{
	int type;
	int n;
	int m;
}	t_que;

int main(void)
{
	int n, m, q;
	scanf("%d %d %d",&n,&m,&q);
	t_que *list;
	list = (t_que *)malloc(sizeof(t_que)*(q+2));
	int i = 0;
	int j = 0;
	while (i < q)
	{
		scanf("%d",&(list[i].type));
		if (list[i].type == 1)
		{
			scanf("%d",&(list[i].n));
		}
		else
		{
			scanf("%d %d",&(list[i].n), &(list[i].m));
		}
		i++;
	}
	int m_list[51];
	i = 0;
	while (i < 51)
	{
		m_list[i] = 0;
		i++;
	}
	int **n_list;
	n_list = (int **)malloc(sizeof(int *)*(n+2));
	i = 0;
	j = 0;
	while (i < n + 2)
	{
		n_list[i] = (int *)malloc(sizeof(int)*(51));
		j = 0;
		while (j < 51)
		{
			n_list[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	//while ( i < q)
	//{
	//	printf("debug:%d %d",list[i].type,list[i].n);
	//	if (list[i].type == 2)
	//		printf(" %d",list[i].m);
	//	printf("\n");
	//	i++;
	//}
	//printf("debug00100\n");
	j = 0;
	i = 0;
	int cur = 0;
	while (i < q)
	{
		//printf("debug00200 i:%d\n",i);
		if (list[i].type == 2)
		{
			m_list[list[i].m]++;
			n_list[list[i].n][list[i].m]++;
		}
		else
		{
			cur = 0;
			j = 1;
			while (j <= 50)
			{
				//printf("debug00300 j:%d\n",j);
				//printf("list[i].n:%d\n",list[i].n);
				//printf("n_list[list[i].n][j]:%d\n",n_list[2][1]);
				if (n_list[list[i].n][j] > 0)
				{
					cur += (n-m_list[j]);
				}
				j++;
			}
			printf("%d\n",cur);
		}
		i++;
	}
	return (0);
}
