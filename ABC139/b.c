#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int m = 1;
	int i = 0;
	while (m < b)
	{
		m--;
		m+=a;
		i++;
	}
	printf("%d\n",i);
	return(0);
}
