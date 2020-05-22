#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, x;
	scanf("%d %d",&n,&x);
	int *l;
	l = (int*)malloc(sizeof(int)*(n+2));
	int i =0;
	while (i < n)
	{
		scanf("%d",&(l[i]));
		i++;
	}
	i = 0;
	int *d;
	int sum = 1;
	d = (int*)malloc(sizeof(int)*(n+3));
	d[0] = 0;
	d[1] = 0;
	i = 2;
	while (i < n+2)
	{
		d[i] = d[i-1]+l[i-2];
		if(d[i]<=x)
		{
			sum++;
		}
		i++;
	}
	printf("%d\n",sum);

	return(0);
}
