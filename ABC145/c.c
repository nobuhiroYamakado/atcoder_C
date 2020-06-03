#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int e(int n)
{
	int r = 1;
	int i = 0;
	while (i < n)
	{
		r = r*(i+1);
		i++;
	}
	return(r);
}

long double met(int x1, int x2, int y1, int y2)
{
	int a = (x1-x2)*(x1-x2);
	int b = (y1-y2)*(y1-y2);
	return (sqrtl(a+b));
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int *x, *y;
	x = (int *)calloc(n+1,sizeof(int));
	y = (int *)calloc(n+1,sizeof(int));
	int i = 0;
	int j = 0;
	while (i < n)
	{
		scanf("%d %d",&x[i],&y[i]);
		i++;
	}
	i = 0;
	long double r = 0;
	
	if (n == 2)
	{
		r = met(x[0],x[1],y[0],y[1]);
		printf("%.10Lf\n",r);
		return(0);
	}

	if (n == 3)
	{
		i = 0;
		j = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				r = r + met(x[i],x[j],y[i],y[j]);
				j++;
			}
			i++;
		}
		r = r / 3.0;
		printf("%.10Lf\n",r);
		return(0);
	}

	if (n <= 8)
	{
		i = 0;
		j = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				r = r + met(x[i],x[j],y[i],y[j]);
				j++;
			}
			i++;
		}
		r = r / (long double)n;
		printf("%.10Lf\n",r);
		return(0);
	}

	return(0);
}
