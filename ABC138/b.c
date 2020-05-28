#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int *a;
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int)*(n));
	int i = 0;
	while (i < n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	double ans = 0;
	i = 0;
	while (i < n)
	{
		ans += 1.0/(double)a[i];
		i++;
	}
	printf("%.10f\n",1.0/ans);
	return(0);
}
