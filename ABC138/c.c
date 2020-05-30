#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int f(const void *a, const void *b)
{
	return(*(int *)a - *(int *)b);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int *v;
	v = (int *)malloc(sizeof(int)*(n));
	double *a;
	a = (double *)malloc(sizeof(double)*(n));
	int i = 0;
	while (i < n)
	{
		scanf("%d",&v[i]);
		i++;
	}
	qsort(v,n,sizeof(int),f);
	i = 0;
	while (i < n)
	{
		a[i] = (double)v[i];
		i++;
	}
	i = 1;
	while (i < n)
	{
		a[i] = (a[i] + a[i-1])/2.0;
		i++;
	}
	printf("%.12f\n",a[n-1]);
	return(0);
}
