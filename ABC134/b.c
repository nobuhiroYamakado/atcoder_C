#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main (void)
{
	int n, d;
	scanf("%d %d",&n, &d);
	int x = 0;
	if (n%(2*d+1) != 0)
		x = 1;
	printf("%d\n",(n/(2*d+1))+x);
	return(0);
}
