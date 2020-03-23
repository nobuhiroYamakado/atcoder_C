#include<stdio.h>
#include<string.h>
void init(long long int *arr, long long int len)
{
	long long int index =0;
	while (index <len)
	{
		arr[index] =0;
		index++;
	}
}

long long int conv_2(long long int x)
{
	if (x <=0 )
		return (0);
	if (x < 2)
		return (0);
	if (x == 2)
		return (1);
	return(x*(x-1)/2);
}
int main(void)
{
	long long int N;
	scanf("%lld", &N);
	long long int index =0;
	long long int arr_A[N];
	while (index <N)
	{
		scanf("%lld", &arr_A[index]);
		index++;
	}
	long long int arr_count[N+1];
	init(arr_count, N+1);
	index =0;
	while (index < N)
	{
		arr_count[arr_A[index]]++;
		index++;
	}
	index=1;
	long long int sum =0;
	while (index <=N)
	{
		sum = sum + conv_2(arr_count[index]);
		if (arr_count[index] ==1)
			arr_count[index] =0;
		if (arr_count[index] >1)
			arr_count[index] = conv_2(arr_count[index])-conv_2(arr_count[index]-1);
		index++;
	}
	index =0;
	while (index < N)
	{
		printf("%lld\n",sum - arr_count[arr_A[index]]);
		index++;
	}
	return (0);
}
