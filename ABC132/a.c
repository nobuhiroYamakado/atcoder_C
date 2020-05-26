#include <stdio.h>

int main (void)
{
	char str[6];
	scanf("%s",str);
	if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3])
		printf("No");
	else if(str[0] == str[1] && str[2] == str[3])
		printf("Yes");
	else if(str[0] == str[2] && str[1] == str[3])
		printf("Yes");
	else if(str[0] == str[3] && str[1] == str[2])
		printf("Yes");
	else
		printf("No");

	return(0);
}
