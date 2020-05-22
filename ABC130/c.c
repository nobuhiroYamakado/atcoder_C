#include <stdio.h>
#include <stdlib.h>

#define lli long long int
int main(void)
{
	lli w, h, x, y;
	scanf("%lld %lld %lld %lld",&w,&h,&x,&y);
	double half;
	half = (double)(w*h) / 2.0;
	int is_center = 0;
	if ((2*x == w) && (2*y == h))
		is_center = 1;
	printf("%.10lf %d\n", half, is_center);
	return(0);
}
