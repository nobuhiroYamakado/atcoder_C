#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[110];
	scanf("%s",s);
	int i = 0;
	while (s[i] != '\0')
	{
		if (i%2 != 0 && s[i]=='R')
		{
			printf("No\n");
			return(0);
		}
		if (i%2 == 0 && s[i]=='L')
		{
			printf("No\n");
			return(0);
		}
		i++;
	}
	printf("Yes\n");
	return(0);
}
