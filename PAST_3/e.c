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
	int x;
	int y;
}	t_que;

typedef struct s_arrow
{
	int u;
	int v;
} t_arrow;

int main(void)
{
	int n, m, q;
	scanf("%d %d %d",&n,&m,&q);
	t_arrow *arrow_list;
	arrow_list = (t_arrow *)malloc(sizeof(t_arrow)*(m+3));
	int i = 0;
	int j = 0;
	while ( i < m)
	{
		scanf("%d %d",&(arrow_list[i].u),&(arrow_list[i].v));
		i++;
	}
	int *c;
	c = (int *)malloc(sizeof(int)*(n+3));
	i = 0;
	while (i < n)
	{
		scanf("%d",&(c[i]));
		i++;
	}
	t_que *list;
	list = (t_que *)malloc(sizeof(t_que)*(q+2));
	i = 0;
	j = 0;
	
	while (i < q)
	{
		scanf("%d",&(list[i].type));
		if (list[i].type == 1)
		{
			scanf("%d",&(list[i].x));
		}
		else
		{
			scanf("%d %d",&(list[i].x), &(list[i].y));
		}
		i++;
	}
	i=0;
	while (i < n)
	{
		//printf("debug i:%d, c[i]:%d\n",i,c[i]);
		i++;
	}

	i = 0;
	j = 0;
	while (i < q)
	{
		//printf("debug00200 i:%d, list[i].x:%d\n",i, list[i].x);
		printf("%d\n",c[list[i].x-1]);
		j = 0;
		if (list[i].type == 1)
		{
			while (j < m)
			{
				if(arrow_list[j].u == list[i].x)
					c[arrow_list[j].v-1] = c[list[i].x-1];
				if(arrow_list[j].v == list[i].x)
					c[arrow_list[j].u-1] = c[list[i].x-1];
				j++;
			}
		}
		else
		{
			c[list[i].x -1] = list[i].y;
			//printf("j:%d, arrow_list[j].u:%d, arrow_list[j].v:%d\n",j,arrow_list[j].u,arrow_list[j].v);
		}
		i++;
	}

	return (0);
}
