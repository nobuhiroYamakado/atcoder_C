#include <stdio.h>
#include <string.h>

int main(void)
{
    long long int h, w;

    scanf("%lld %lld", &h, &w);
    if (h%2 == 1 && w%2 ==1)
	{
		h = ((h * w) / 2) + 1;
	}
	else 
	{
		h = (h * w)/2;
	}
	printf("%lld", h);
    return (0);
}
