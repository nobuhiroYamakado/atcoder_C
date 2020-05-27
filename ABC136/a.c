#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b,&c);
	int x = c - (a-b);
	if (x >= 0)
		printf("%d\n",x);
	else
		printf("0\n");
	return(0);
}
