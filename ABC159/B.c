#include <stdio.h>
#include <string.h>

int	main	(void)
{

	char str[101];
	scanf("%s",str);
	int len = strlen(str);
	int index =0;
	while (index < len/2)
	{
		if(str[index] != str[len-index-1])
		{
			printf("No");
			return (0);
		}
		index++;
	}
	if (len ==3)
	{
		printf("Yes\n");
		return (0);
	}
	index =0;
	while (index< (len-1)/4)
	{
		if(str[index] != str[(len-1)/2 - index -1])
		{
			printf("No");
			return (0);
		}
		index++;
	}
	index =0;
	while (index< (len-1)/4)
	{
		if(str[len -index-1] != str[len -((len-1)/2 - index -1)-1])
		{
			printf("No");
			return (0);
		}
		index++;
	}
	printf("Yes\n");
	return (0);
}
