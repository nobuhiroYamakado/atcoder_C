#include <stdio.h>
#include <math.h>

int	main(void)
{
	int L;
	scanf("%d", &L);
	if(L%3 == 0)
	{
		int c = L/3;
		printf("%.16Lf\n", (long double )c*c*c);
		return(0);
	}
	long double c_ld_L;
	c_ld_L = L*L*L;
	printf("%.16Lf\n", c_ld_L/27);
	return (0);
}
