#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	char s[120];
	scanf("%s",s);
	if(n%2 != 0)
	{
		printf("No\n");
		return(0);
	}
	int i = 0;
	while (i < n/2)
	{
		if(s[i] != s[n/2 + i])
		{
			printf("No\n");
			return(0);
		}
		i++;
	}
	printf("Yes\n");
	return(0);
}
