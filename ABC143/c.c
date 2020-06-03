#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define lli long long int

int main(void)
{
	int n;
	scanf("%d",&n);
	char *s;
	s = (char *)calloc(n+5,sizeof(char));
	int i = 0;
	int j = 0;

	scanf("%s",s);
	s[n] = '\0';
	i = 1;
	j = 1;
	while (i < n)
	{
		if(s[i-1] != s[i])
			j++;
		i++;
	}
	printf("%d\n",j);
	return (0);
}
