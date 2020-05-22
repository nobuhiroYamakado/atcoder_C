#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
	char str[5];
	scanf("%s",str);
	str[3] = '\0';
	int i = 0;
	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == false)
		{
			printf("error\n");
			return(0);
		}
		i++;
	}
	printf("%d\n",atoi(str)*2);
	return(0);
}
