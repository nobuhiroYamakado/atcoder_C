#include <stdio.h>
#include <string.h>
int min(int *arr, int len)
{
	int index =0;
	int min =0;
	min = arr[0];
	while (index < len)
	{
		if (min > arr[index])
			min = arr[index];
		index++;
	}

	return(min);
}
int main(void)
{
	int A, B, M;
	
	scanf("%d %d %d", &A, &B, &M);

	int p_a[A+1];
	int p_b[B+1];
	int x[M];
	int y[M];
	int c[M];

	int index = 0;
	while (index < A)
	{
		scanf("%d", &p_a[index]);
		index++;
	}
	index = 0;
	while (index < B)
	{
		scanf("%d", &p_b[index]);
		index++;
	}
	index = 0;
	int p_min = 0;
	//割引使わないパターン
	p_min = min(p_a, A) + min(p_b, B);
	//割引使うパターン
	while (index <M)
	{
		scanf("%d %d %d", &x[index], &y[index], &c[index]);
		if(p_min > p_a[x[index]-1] + p_b[y[index]-1] - c[index])
		{
			p_min = p_a[x[index]-1] + p_b[y[index]-1] - c[index];
		}
		index++;
	}
	printf("%d\n", p_min);
	return (0);
}
