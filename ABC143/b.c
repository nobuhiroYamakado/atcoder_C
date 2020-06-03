#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n;
	scanf("%d",&n);
	int *d;
	d = (int *)malloc(sizeof(int)*(n));
	int i = 0;
	while (i < n)
	{
		scanf("%d",&d[i]);
		i++;
	}
	i = 0;
	int j = 0;
	int sum = 0;
	while (i < n)
	{
		j = i;
		while (j < n)
		{
			if(j != i)
			{
				sum+=d[i]*d[j];
			}
			j++;
		}
		i++;
	}
	printf("%d\n",sum);
	return(0);
}
