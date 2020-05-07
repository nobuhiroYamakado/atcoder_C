#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define lli long long int

int main(void)
{
	char input[102];
	char top[2];
	lli top_int;
	lli k;
	scanf("%s",input);
	scanf("%lld",&k);
	lli dig;
	lli out = 0;
	dig = strlen(input);
	top[0] = input[0];
	top[1] = '\0';
	top_int = strtol(top,NULL,10);
	if ( k == 1)
	{
		out = (dig-1) * 9 + 1;
		out = out + top_int - 1;
	}
	printf("%lld\n", out);
	return (0);
}
