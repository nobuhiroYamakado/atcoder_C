#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int
#define ABS(X) (( (X)>=0 )?(X):(-1 * (X)))
typedef struct s_cell
{
	lli h;
	lli cost;
	lli number;
}	t_cell;


int	main(void)
{
	lli n;
	scanf("%lld", &n);

	t_cell cells[n];
	lli index = 0;

	while (index < n)
	{
		scanf("%lld", &(cells[index].h));
		cells[index].number = index;
		index++;
	}

	cells[0].cost = 0;
	cells[1].cost = ABS(cells[0].h - cells[1].h);
	index = 2;
	lli v = 0;
	lli w = 0;
	while (index < n)
	{
		v = ABS(cells[index-1].h - cells[index].h) + cells[index-1].cost;
		w = ABS(cells[index-2].h - cells[index].h) + cells[index-2].cost;
		cells[index].cost = (v<w)?(v):(w);
		index++;
	}

	printf("%lld",cells[n-1].cost);
	return(0);
}
