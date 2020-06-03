#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[10];
	scanf("%s",s);
	if (s[0] == 'M')
		printf("6\n");
	else if(s[0] =='T' && s[1] == 'U')
		printf("5\n");
	else if(s[0] == 'W')
		printf("4\n");
	else if(s[0] == 'T')
		printf("3\n");
	else if(s[0] == 'F')
		printf("2\n");
	else if(s[0] == 'S' && s[1] == 'A')
		printf("1\n");
	else
		printf("7\n");
	return(0);
}
