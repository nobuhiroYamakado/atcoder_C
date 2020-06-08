#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define lli long long int
#define MAX(a,b) ((a)>(b)?(a):(b))
int de(lli a)
{
	if(a < 1)
		return(0);
	if(a < 10)
		return(1);
	if(a < 100)
		return(2);
	if(a < 1000)
		return(3);
	if(a < 10000)
		return(4);
	if(a < 100000)
		return(5);
	if(a < 1000000)
		return(6);
	if(a < 10000000)
		return(7);
	if(a < 100000000)
		return (8);
	if(a < 1000000000)
		return (9);
	return(10);
}

int main(void)
{
	lli a, b, x;
	scanf("%lld %lld %lld",&a, &b, &x);
	if(a+b > x)
	{
		printf("0\n");
		return(0);
	}

	if(a*1000000000 + b*10 <= x)
	{
		printf("1000000000\n");
		return(0);
	}
	lli i = 0;
	lli U = 1000000000;
	lli N, d;
	while (i < U)
	{
		N = (i + U + 1) / 2;
		d = de(N);
//		printf("i:%lld U;%lld d:%lld\n",i, U, d);
//		printf("a;%lld, b:%lld, a*i:%lld, b*d:%lld \n", a, b, a*i, b*d);
//		printf("Z;%lld\n",a*i + b*d);
//		printf("W;%lld\n",x);
		if ( ((a*N) + (b*d)) <= x)
			i = N;
		else
			U = N -1;
	}
	//i = MAX(x/a, x/b) - 1000;
	//while (i< 1000000000 && a*i + b*de(i) < x)
	//{
	//	//if(i%10000 == 0)
	//		//printf("debug i;%lld\n",i);
	//	i++;
	//}
	if ( i >= 1000000000 )
		printf( "1000000000\n" );
	else
		printf( "%lld\n",i );
	return(0);
}
