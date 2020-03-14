#include <stdio.h>
#include <string.h>

int main(void)
{
    long long int h, w;

    scanf("%lld %lld", &h, &w);
    h = ((h/2) * w) + ((h%2) * (w%2));
    printf("%lld", h);
    return (0);
}
