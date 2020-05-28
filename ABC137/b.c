#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int k, x;
	scanf("%d %d",&k,&x);
	int i = -1000000;
	int c = 1;
	while (i <= 1000000)
	{
		if(i>= x - k + 1 && i <= x + k -1)
		{
			if (k*2 - 1 == c)
				printf("%d\n",i);
			else
				printf("%d ",i);
			c++;
		}
		i++;
	}
	return(0);
}
