#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int i = 1;
	int sum = 0;
	while (i <= n)
	{
		if ((i>0 && i < 10)||(i>99 && i < 1000)||(i>9999 && i < 100000))
			sum++;
		i++;
	}
	printf("%d\n",sum);
	return(0);
}
