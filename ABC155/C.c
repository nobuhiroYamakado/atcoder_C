#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	long long int N;
	long long int arr[200001] = {};
	scanf("%lld",&N);
	char str[200001][11];
	long long int index = 0;
	while (index < N)
	{
		scanf("%s",str[index]);
		index++;
	}
	index = 0;
	qsort(str,N,11,strcmp);
	while (index <N-1)
	{
		if(!strcmp(str[index],str[index+1]))
		{
			arr[index]++;
			arr[index+1] =  arr[index] +1;
		}
		index++;
	}
	index =0;
	long long int max_count = 0;
	while (index <N)
	{
		if(max_count < arr[index])
			max_count = arr[index];
		index++;
	}
	index =0;
	while (index <N)
	{
		if(arr[index] == max_count)
			printf("%s\n",str[index]);
		index++;
	}


	return(0);
}
