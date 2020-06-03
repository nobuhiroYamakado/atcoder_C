#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rot(char c, int i)
{
	if (c + i <= 'Z')
		return(c+i);
	return(c+i - ('Z'-'A')-1);
}
int main (void)
{
	int n;
	char s[10000];
	scanf("%d",&n);
	scanf("%s",s);
	int i = 0;
	while(s[i] != '\0')
	{
		printf("%c",rot(s[i],n));
		i++;
	}
	
	return(0);
}
