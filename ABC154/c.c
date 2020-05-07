#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int

lli bigger(const void *a, const void *b)
{
	if(*(lli *)a > *(lli *)b)
	{
		return -1;
	}
	else if (*(lli *)a == *(lli *)b)
	{
		return 0;
	}
	return 1;
}
int main(void)
{
	lli n;
	scanf("%lld", &n);

	lli a[n];
	lli index =0;
	while (index <n)
	{
		scanf("%lld",&a[index]);
		index++;
	}
	qsort((void *)a, (size_t)n, sizeof(a[0]), bigger);
	index = 0;
	while (index < n-1)
	{
		if(a[index] - a[index+1] == 0)
		{
			printf("NO\n");
			return (0);
		}
		index++;
	}

	printf("YES\n");
	return(0);
}

