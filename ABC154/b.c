#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int

int main(void)
{
	char s[102];
	scanf("%s", s);

	int i = 0;
	while (s[i] != '\0')
	{
		s[i] = 'x';
		i++;
	}
	printf("%s", s);
	return(0);
}

