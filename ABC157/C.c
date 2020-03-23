#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int power(int x, int y)
{
	if (y ==0)
		return(1);
	if (x ==0)
		return(0);
	int index =0;
	int num = 1;
	while (index <y)
	{
		num = num * x;
		index++;
	}
	return (num);
}
int	main(void)
{

	int N, M;
	scanf("%d %d", &N, &M);
	int s[M],c[M];
	int index =0;
	while (index <M)
	{
		scanf("%d %d", &s[index], &c[index]);
		index++;
	}
	int i =power(10,N-1)-1;
	if (i !=0)
		i++;
	int j =0;
	while (i <1000)
	{
		j =0;
		while (j < M)
		{
			if(c[j] != (i/power(10,N-s[j]))%10)
			{
				j--;
				break;
			}
			j++;
		}
		if(j == M)
		{
			printf("%d\n", i);
			return (0);
		}
		i++;
	}

	printf("-1");
	return (0);
}
