#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fac(int n)
{
	int f = n;
	if (n <= 0)
		return(1);
	while(--n)
		f *=n;
	return f;
}
int conv(int x, int y)
{
	int c;
	c = fac(x)/fac(y);
	c = c/fac(x-y);

	return (c);

}

int	main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int r_num = 0;
	if (N==1 && M==1)
	{
		printf("0\n");
		return 0;
	}
	
	printf("%d\n",(((N+M)*(N+M-1))/2)-(N*M));
	return (0);
}
