#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int r, d, x;
	scanf("%d %d %d", &r, &d, &x);
	int i = 0;
	while (i < 10)
	{
		x = r*x - d;
		printf("%d\n",x);
		i++;
	}

	return(0);
}
