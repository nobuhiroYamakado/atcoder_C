#include <stdio.h>

int main(void)
{
	int a;
	char s[15];
	scanf("%d",&a);
	scanf("%s",s);
	printf("%s\n",(a>=3200?s:"red"));
	return(0);
}
