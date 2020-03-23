#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	int arr_A[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int check[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int N;
	int index = 0;
	scanf("%d %d %d", &arr_A[0][0], &arr_A[0][1], &arr_A[0][2]);
	scanf("%d %d %d", &arr_A[1][0], &arr_A[1][1], &arr_A[1][2]);
	scanf("%d %d %d", &arr_A[2][0], &arr_A[2][1], &arr_A[2][2]);
	scanf("%d",&N);
	if (N < 3)
	{
		printf("No\n");
		return(0);
	}
	
	int arr_b[N];
	while (index < N)
	{
		scanf("%d", &arr_b[index]);
		index++;
	}

	int i =0;
	int j =0;
	int cnt=0;
	index =0;
	while (index < N)
	{
		i =0;
		while (i <3)
		{
			j =0;
			while (j <3)
			{
				if(arr_A[i][j] == arr_b[index])
				{
					check[i][j] = 1;
					cnt++;
				}
				j++;
			}
			i++;
		}
		index++;
	}
	if(cnt <3 )
	{
		printf("No\n");
		return (0);
	}
	i =0;
	j =0;
	while (i <3)
	{
		cnt =0;
		j = 0;
		while(j <3)
		{
			cnt = check[i][j] + cnt;
			j++;
		}
		if (cnt == 3)
		{
			printf("Yes\n");
			return (0);
		}
		i++;
	}
	i=0;
	j=0;
	cnt=0;
	while (i <3)
	{
		cnt =0;
		j = 0;
		while(j <3)
		{
			cnt = check[j][i] + cnt;
			j++;
		}
		if (cnt == 3)
		{
			printf("Yes\n");
			return (0);
		}
		i++;
	}

	if(check[0][0]+check[1][1]+check[2][2] == 3 || check[0][2]+check[1][1]+check[2][0] ==3)
	{
		printf("Yes\n");
		return (0);
	}
	printf("No\n");
	return (0);
}
