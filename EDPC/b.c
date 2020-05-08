#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int
#define llf long double
#define ABS(X) ((X>0)?(X):(-1*(X)))

typedef struct s_cell
{
	lli h;
	lli c;
	lli n;
} t_cell;

int	 main(void)
{
	lli n, k;
	scanf("%lld %lld", &n, &k);

	lli index = 0;
	t_cell cells[n];

	while (index < n)
	{
		scanf("%lld",&(cells[index].h));
		cells[index].n = index;
		cells[index].c = 0;
		index++;
	}
	lli j = 0;
	lli w[101];
	//lli min = LLONG_MAX;
	lli min = 9223372036854775806;
	index = 0;
	while (index < n)
	{
		j = 0;
		min = 9223372036854775806;
		while (j < k && j < index)
		{
			w[j] = ABS(cells[index].h - cells[index-j-1].h) + cells[index-j-1].c;
			min = (w[j]<min)?(w[j]):(min);
			//printf("min:%lld, j:%lld, index:%lld, w[j];%lld\n",min, j, index,w[j]);
			//printf("c[i]h:%lld, c[i-j-1]h:%lld, c[i-j-1]c:%lld\n",cells[index].h,cells[index-j-1].h,cells[index-j-1].c);
			j++;
		}
		if(index > 0)
			cells[index].c = min;
		//printf("index:%lld, cost:%lld\n",index,cells[index].c);
		index++;
	}
	printf("%lld\n",cells[n-1].c);
	return(0);
}
