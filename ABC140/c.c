#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define lli long long int
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int *b;
	b = (int*)malloc(sizeof(int)*(n));
	int *a;
	a = (int*)malloc(sizeof(int)*(n));
	int i = 0;
	while (i < n-1)
	{
		scanf("%d",&b[i]);
		i++;
	}
	i = 0;
	a[0] = b[0];
	while (i < n-1)
	{
		if(a[i] > b[i])
			a[i] = b[i];
		a[i+1] = b[i];
		i++;
	}
	i = 0;
	int sum = 0;
	while (i < n)
	{
		sum+=a[i];
		i++;
	}
	printf("%d\n",sum);
	return(0);
}
