#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int
char upp(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}
int main(void)
{
	char s[4];
	char t[4];
	scanf("%s",s);
	scanf("%s",t);
	int i = 0;
	int j = 0;
	while (i < 3)
	{
		if (s[i] == t[i])
			j++;
		i++;
	}
	if (j == 3)
	{
		printf("same\n");
		return (0);
	}
	i = 0;
	j = 0;
	while (i < 3)
	{
		if (upp(s[i]) == upp(t[i]))
			j++;
		i++;
	}
	if (j == 3)
	{
		printf("case-insensitive\n");
		return (0);
	}

	printf("different\n");
	return (0);
}
