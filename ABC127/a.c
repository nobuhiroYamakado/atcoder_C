#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d",&a, &b);
	if( a>= 13)
	{
		printf("%d\n",b);
		return(0);
	}
	if (a>= 6)
	{
		printf("%d\n",b/2);
		return(0);
	}
	printf("0");
	return (0);
}
