#include<stdio.h>
const long long int prime = 1000000007;
const long long int max_v = 9223372036854775807;
long long int modPow(long long int a, long long int n, long long int p)
{
	if(n==1) return a%p;
	if(n%2 == 1) return ((a%p) * (modPow(a, n-1, p)%p))%p;
	long long int t = modPow(a, n/2, p)%p;
	return (((t%p)*(t%p))%p);
}
long long int factr(long long int a)
{
	if (a ==0||a==1) return (1);
	long long int index =0;
	long long int r_v=1;
	while (index < a)
	{
		r_v = (r_v%prime*(a-index))%prime;
		index++;
	}
	return (r_v%prime);
}
long long int fac_stop(long long int a, long long int x)
{
	if (x == 0) return (1);
	if (a == 1) return (1);
	long long int index = 0;
	long long int r_v=1;
	while (index < x)
	{
		r_v = (r_v%prime*(a-index)%prime);
		index++;
	}
	return (r_v%prime);
}


int	main(void)
{
	long long int n, a, b;
	scanf("%lld %lld %lld", &n, &a, &b);
	long long int sum;
	sum = (modPow(2, n, prime) -1)%prime;
	long long int count_b, count_a;
	count_a = (modPow(factr(a),prime -2,prime) * fac_stop(n,a)%prime)%prime;
	count_b = (modPow(factr(b),prime -2,prime) * fac_stop(n,b)%prime)%prime;
	long long int r = (sum%prime- count_a%prime -count_b%prime)%prime;
	if(r < 0)
		r = prime +r;
	printf("%lld\n",r);
	return (0);
}
