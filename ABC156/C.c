#include<stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b)
{
	return *(int*)a - *(int *)b;
}
int	main(void)
{
	long long int N;
	scanf("%lld",&N);
	long long int index =0;
	long long int X[N];
	long long int p = 0;
	long long int q = 0;
	if(N ==1)
	{
		printf("0\n");
		return(0);
	}
	long long int sum = 0;
	while (index < N)
	{
		scanf("%lld", &X[index]);
		sum = sum + X[index];
		index++;
	}
	p = sum/N;
	q = (sum/N) + 1;
	long long int sump = 0;
	long long int sumq = 0;
	index =0;
	while (index <N)
	{
		sump = sump + ((X[index]-p)*(X[index]-p));
		sumq = sumq + ((X[index]-q)*(X[index]-q));
		index++;
	}
	if (sump > sumq)
		printf("%lld\n", sumq);
	else
		printf("%lld\n", sump);
	return(0);
}
