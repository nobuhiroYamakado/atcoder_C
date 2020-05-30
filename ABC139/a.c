#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[5];
	char t[5];
	scanf("%s%s",s,t);
	int sum = 0;
	if(s[0] == t[0])
		sum++;
	if(s[1]==t[1])
		sum++;
	if(s[2]==t[2])
		sum++;
	printf("%d\n",sum);
	return(0);
}

