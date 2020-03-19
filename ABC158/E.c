#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long long int	get_digit(long long int n)
{
	long long int index = 0;
	while (n!=0)
	{
		n = n/10;
		index++;
	}
	return(index);
}

long long int	power(long long int x, long long int y)
{
	long long int index = 0;
	long long int tmp = 1;
	//only for positive long long integers
	if (y == 0)
		return (1);
	else if (x ==0)
		return (0);
	while (index < y)
	{
		tmp = tmp * x;
		index++;
	}
	return(tmp);
}

void	init_lli_arr(long long int *arr, long long int num)
{
	int i = 0;
	while (i < num)
	{
		arr[i] = 0;
		i++;
	}
}
long long int	c_p_str(long long int prime, long long int digits, long long int len, long long int q_base, long long int num)
{
	long long int r_num = 0;
	long long int index = 0;
	long long int tmp = 0;
	long long int pow_base = 1;
	if (len == digits)
	{
		if (num % prime == 0)
			return (1);
		return (0);
	}
	while (index < len - digits + 1)
	{
		tmp = num / pow_base;
		tmp = tmp%q_base;
		if(tmp%prime == 0)
		{
			r_num++;
		}
		pow_base = pow_base * 10;
		index++;
	}
	return (r_num);
}
int	main(void)
{
	long long int N, P;
	scanf("%lld %lld", &N, &P);
	char str[N+5];
	scanf("%s", str);
	long long int r_count = 0;
	long long int d = 1;
	long long int len = N;
	long long int q_base;
	if ( len < 10)
	{
		long long int num = atoll(str);
		while (d <= len)
		{
			q_base = power(10, d);
			r_count = r_count + c_p_str(P, d, len, q_base, num);
			d++;
		}
		printf("%lld\n", r_count);
		return (0);
	}
	else if (10%P == 0)
	{
		int index = 0;
		while (index < N)
		{
			if ((str[index] - '0')%P == 0)
			{
				r_count = r_count + index + 1;
			}
			index++;
		}
		printf("%lld\n",r_count);
		return(0);
	}
	else
	{
		long long int index = N -1;
		long long int qdsum[N+1];
		long long int ten = 1;
		qdsum[N]=0;
		while (index >= 0)
		{
			long long int a = (str[index] -'0') * ten % P;
			qdsum[index] = (a + qdsum[index+1]) % P;
			ten = ten * 10;
			ten = ten % P;
			index--;
		}
		long long int count_arr[P];
		init_lli_arr(count_arr, P);
		index = N;
		while (index >=0)
		{
			r_count += count_arr[qdsum[index]];
			count_arr[qdsum[index]]++;
			index--;
		}

		printf("%lld\n",r_count);
		return(0);
	}
}
