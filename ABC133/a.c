#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
int main(void)
{
	int n, a, b;
	scanf("%d %d %d",&n, &a, &b);
	printf("%d\n",MIN(b,n*a));
	return(0);
}
