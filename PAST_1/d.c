#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int f(const void *a, const void *b)
{
	return(*(int*)a - *(int*)b);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int *a;
	int i = 0;
	a = (int*)malloc(sizeof(int)*(n+3));
	int *num;
	num = (int *)malloc(sizeof(int)*(n+3));
	while (i < n)
	{
		scanf("%d",&(a[i]));
		num[i] = 0;
		i++;
	}
	num[n] = 0;
	qsort(a, n, sizeof(int),f);
	i = 0;
	int from = 0;
	int to = 0;
	while (i < n)
	{
		if (a[i] != i+1 && from == 0)
		{
			from = i+1;
		}
		if(to == 0 && i < n - 1 && a[i]==a[i+1])
		{
			to = a[i];
		}
		num[a[i]]++;
		i++;
	}
	i = 1;
	int from_a = 0;
	int to_a = 0;
	while (i <= n)
	{
		if(num[i] == 2)
			to_a=i;
		if(num[i] == 0)
			from_a=i;
		i++;
	}
	if (to == 0 && from == 0)
		printf("Correct\n");
	else
		printf("%d %d\n", to_a, from_a);
	return (0);
}
