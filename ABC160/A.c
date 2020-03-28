#include <stdio.h>

int	main(void)
{
	char str[7];
	scanf("%s",str);
	if (str[2]==str[3]&&str[4]==str[5])
	{
		printf("Yes\n");
		return(0);
	}
	printf("No\n");
	return(0);

}
