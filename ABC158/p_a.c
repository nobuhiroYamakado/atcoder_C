#include <stdio.h>
#include <string.h>
int	main(void)
{
	static char input[4];
	
	scanf("%s", input);
	if (strcmp(input, "AAA") == 0)
	{
		printf("No");
	}
	else if (strcmp(input, "BBB") == 0)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return (0);
}
