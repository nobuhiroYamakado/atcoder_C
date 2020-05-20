#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_pow(int a, int num)
{
	int i = 0;
	int x = 1;
	while (i < num)
	{
		x *= a;
		i++;
	}
	return (x);
}
int main(void)
{
	int n,k;
	scanf("%d %d",&n, &k);
	int *a;
	a = (int *)malloc(sizeof(int)*(n+2));
	a[0] = 0;
	int i =1;
	int j =0;
	while (i <= n)
	{
		j = 0;
		a[i] = i;
		while (j < 20 && a[i] < k)
		{
			a[i] = 2*a[i];
			j++;
		}
		a[i] = j;
		i++;
	}
	i = 1;
	j = 0;
	int sum = 0;
	int z = n*2;
	double d = 0;
	while (i <= n)
	{
		//printf("a[%d]:%d\n",i,a[i]);
		sum += ft_pow(2,a[1] - a[i]);
		z *= 2;
		d += 1 / ((double)n * ft_pow(2,a[i]));
		i++;
	}
	
	double ans = (double)sum / (double)z;
	//printf("debug sum:%d, z:%d\n",sum,z);
	//printf("%.14lf\n",ans);
	printf("%.12lf\n",d);

	return(0);
}
