#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int *p;
	int *q;
	p = (int *)malloc(sizeof(int)*(n));
	q = (int *)malloc(sizeof(int)*(n));
	int i = 0;
	while (i < n)
	{
		scanf("%d",&p[i]);
		q[i] = 1+i;
		i++;
	}
	int sig = 0;
	i = 0;
	while (i < n)
	{
		if (p[i] != i+1)
			sig++;
		i++;
	}
	if (sig == 2||sig == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return(0);
}
