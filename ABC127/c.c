#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m;
	scanf("%d %d",&n,&m);
	int *l;
	int *r;
	l = (int*)malloc(sizeof(int)*(m+2));
	r = (int*)malloc(sizeof(int)*(m+2));
	int i = 0;
	while (i < m)
	{
		scanf("%d %d",&l[i],&r[i]);
		i++;
	}
	int sum = 0;
	int min = 0;
	int max = 100000;
	i = 0;
	while (i < m)
	{
		if(l[i] > min)
			min = l[i];
		if(r[i] < max)
			max = r[i];
		//printf("max:%d, min:%d\n",max, min);
		i++;
	}
	sum = max-min + 1;
	if (sum <0)
		sum = 0;
	printf("%d\n",sum);
	return(0);
}
