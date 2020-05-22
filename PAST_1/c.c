#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int f(const void *a, const void *b)
{
	return(*(int *)a - *(int *)b);
}
int main(void)
{
	int in[6];
	int i = 0;
	while (i < 6)
	{
		scanf("%d",&in[i]);
		i++;
	}
	qsort(in,6,sizeof(int),f);
	printf("%d\n",in[3]);


	return(0);
}
