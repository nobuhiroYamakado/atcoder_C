#include <stdio.h>
#include <string.h>
int	main()
{
	long long int  a, b;
	char s[11];
	char t[11];
	char u[11];

	scanf("%s %s",s, t);
	scanf("%lld %lld",&a, &b);
	scanf("%s", u);

	if(strcmp(s,u) == 0)
		printf("%lld %lld", a-1, b);
	else
		printf("%lld %lld", a, b-1);
	return(0);
}

