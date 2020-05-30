#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[20];
	scanf("%s",s);
	if(s[0] == 'S')
		printf("Cloudy\n");
	if(s[0] == 'C')
		printf("Rainy\n");
	if(s[0] == 'R')
		printf("Sunny\n");
	return(0);
}
