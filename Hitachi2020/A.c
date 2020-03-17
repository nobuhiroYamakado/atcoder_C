#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[11];
	scanf("%s",str);

	if(strcmp(str, "hi") == 0 || strcmp(str,"hihi") ==0||strcmp(str,"hihihi")==0||strcmp(str,"hihihihi")==0||strcmp(str,"hihihihihi")==0)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}
