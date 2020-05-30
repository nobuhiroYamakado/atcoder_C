#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	double r;
	r = (double)((n/2)+n%2)/(double)(n);
	printf("%.10f\n",r);
	return(0);
}
