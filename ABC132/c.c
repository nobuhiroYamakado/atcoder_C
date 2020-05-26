#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int f(const void *a, const void *b)
{
	return (*(int *)a - *((int *)b));
}
int main(void)
{
	int n;
	int *d;
	int i = 0;
	scanf("%d",&n);
	d = (int *)malloc(sizeof(int)*(n+2));
	while (i < n)
	{
		scanf("%d",&d[i]);
		i++;
	}
	qsort(d, n, sizeof(int), f);
	printf("%d\n",d[(n/2)]-d[(n/2)-1]);
	return(0);
}
