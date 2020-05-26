#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int i=0;
	int *p;
	p = (int *)malloc(sizeof(int)*(n+3));
	while (i < n)
	{
		scanf("%d",&(p[i]));
		i++;
	}
	i = 1;
	int sum =0;
	while (i < n -1)
	{
		if (p[i-1] < p[i] && p[i] < p[i+1])
			sum++;
		if (p[i-1] > p[i] && p[i] > p[i+1])
			sum++;
		i++;
	}
	printf("%d\n",sum);
	return(0);
}
