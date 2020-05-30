#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct s_pair
{
	int name;
	int num;
} t_pair;

int f(const void *a, const void *b)
{
	return((*(t_pair*)a).num - (*(t_pair*)b).num);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int *)malloc(sizeof(int)*(n));
	t_pair *list;
	list = (t_pair *)malloc(sizeof(t_pair)*(n));
	int i = 0;

	while (i < n)
	{
		scanf("%d",&a[i]);
		list[i].name = i+1;
		list[i].num = a[i];
		i++;
	}
	qsort(list,n,sizeof(t_pair),f);
	i = 1;
	printf("%d",list[0].name);
	while (i < n)
	{
		printf(" %d",list[i].name);
		i++;
	}
	return(0);
}
