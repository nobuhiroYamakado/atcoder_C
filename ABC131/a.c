#include <stdio.h>

int main(void)
{
	char str[6];
	scanf("%s",str);
	str[4] = '\0';
	if(str[0] == str[1] || str[1] == str[2]|| str[2] ==str[3])
	{
		printf("Bad\n");
	}
	else
		printf("Good\n");
	return(0);
}
