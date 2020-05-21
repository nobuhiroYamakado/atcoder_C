#include <stdio.h>

#define max(a,b) (((a)>(b))?(a):(b))
int main(void)
{
	int p, q, r;
	scanf("%d %d %d", &p, &q, &r);
	printf("%d\n",p+q+r-max(max(p,q),max(q,r)));
	return(0);
}
