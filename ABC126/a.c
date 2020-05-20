#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[60];
	int n, k;
	scanf("%d %d", &n, &k);

	int i = 0;
	while (i <= n)
	{
		scanf("%c",&(str[i]));
		i++;
	}
	str[i] = '\0';
	str[k] = str[k] - ('A'-'a');
	printf("%s\n",&(str[1]));
	return(0);
}
