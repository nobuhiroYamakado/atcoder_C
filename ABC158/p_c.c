#include <stdio.h>
int	main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i = 13;
	while (i < 12625)
	{
		if (((i*8)/100) == a && ((i*10)/100) == b)
		{
			break;
		}
		i++;
	}
	if (i == 12625)
	{
		printf("-1");
		return (0);
	}
	printf("%d", i);
	return (0);
}
