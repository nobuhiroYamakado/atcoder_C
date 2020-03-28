#include <stdio.h>
int	main(void)
{
	long long int N;
	scanf("%lld", &N);
	long long int arr[N];
	int index =0;
	while (index <N)
	{
		scanf("%lld",&(arr[index]));
		index++;
	}
	index =0;
	while (index <N)
	{
		if(arr[index]%2 ==0)
		{
			if(arr[index]%3 !=0 && arr[index]%5 !=0)
			{
				printf("DENIED\n");
				return(0);
			}
		}
		index++;
	}
	printf("APPROVED\n");
	return (0);
}
