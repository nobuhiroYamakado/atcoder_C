#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int
#define BIG 1000
typedef struct s_cell
{
	int x;
	int y;
	int val;
} t_cell;

bool is_in_que(t_cell *ques, int pin, int end, int x, int y)
{
	lli i = pin + 1;
	while(i < end)
	{
		if (ques[i].x == x && ques[i].y == y)
		{
			return (true);
		}
		i++;
	}
	return (false);
}
int main(void)
{
	int n,x_big,y_big;
	scanf("%d %d %d", &n,&x_big,&y_big);
	int *x;
	int *y;
	x = (int *)malloc(sizeof(int)*(n+2));
	y = (int *)malloc(sizeof(int)*(n+2));

	int i = 0;


	t_cell *ques;
	ques = (t_cell *)malloc(sizeof(t_cell)*(500*500*500));
	lli pin = 0;
	lli end = 1;
	ques[0].x = 203;
	ques[0].y = 203;
	ques[0].val = 0;
	int **map;
	map = (int **)malloc(sizeof(int*)*(406));
	i = 0;
	int j = 0;
	while (i < 406)
	{
		map[i] = (int*)malloc(sizeof(int)*(406));
		j = 0;
		while (j < 406)
		{
			map[i][j] = BIG;
			j++;
		}
		i++;
	}
	j = 0;
	i = 0;
	while (i < n)
	{
		scanf("%d %d",&(x[i]),&(y[i]));
		map[x[i]+203][y[i]+203] = -1;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 406)
	{
		map[0][i] = -1;
		map[i][0] = -1;
		map[406-1][i] = -1;
		map[i][406-1] = -1;
		i++;
	}
	map[203][203] = 0;
	j = 0;
	while (pin < end )
	{
		if(pin%1000 == 0)
		{
			printf("debug:pin:%d\n",pin);
			printf("debug:end;%d\n",end);
		}
		//printf("debug pin:%d, end:%d\n",pin,end);
		//printf("map pin val%d\n",map[ques[pin].x][ques[pin].y]);
		//printf("pin_x:%d, pin_y:%d\n",ques[pin].x,ques[pin].y);
		if (map[ques[pin].x + 1][ques[pin].y + 1] > 0
				&& map[ques[pin].x + 1][ques[pin].y + 1] > map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x + 1,ques[pin].y + 1) == false )
			{
				//printf("debug00100\n");
				map[ques[pin].x + 1][ques[pin].y + 1] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x+1;
				ques[end].y = ques[pin].y+1;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}

			}
		if (map[ques[pin].x][ques[pin].y + 1] > 0
				&& map[ques[pin].x][ques[pin].y + 1] > map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x,ques[pin].y + 1) == false)
			{
				//printf("debug00200\n");
				map[ques[pin].x][ques[pin].y + 1] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x;
				ques[end].y = ques[pin].y+1;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}

			}
		if (map[ques[pin].x - 1][ques[pin].y + 1] > 0
				&& map[ques[pin].x - 1][ques[pin].y + 1] > map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x - 1,ques[pin].y + 1) == false)
			{
				//printf("debug00300\n");
				map[ques[pin].x - 1][ques[pin].y + 1] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x-1;
				ques[end].y = ques[pin].y+1;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}

			}
		if (map[ques[pin].x + 1][ques[pin].y] > 0
				&& map[ques[pin].x + 1][ques[pin].y] > map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x + 1,ques[pin].y) == false)
			{
				//printf("debug00400\n");
				map[ques[pin].x + 1][ques[pin].y] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x+1;
				ques[end].y = ques[pin].y;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}

			}
		if (map[ques[pin].x - 1][ques[pin].y] > 0
				&& map[ques[pin].x - 1][ques[pin].y] > map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x - 1,ques[pin].y) == false)
			{
				//printf("debug00500\n");
				map[ques[pin].x - 1][ques[pin].y] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x-1;
				ques[end].y = ques[pin].y;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}

			}
		if (map[ques[pin].x][ques[pin].y - 1] > 0
				&& map[ques[pin].x][ques[pin].y - 1] >  map[ques[pin].x][ques[pin].y]
				&& is_in_que(ques,pin,end, ques[pin].x,ques[pin].y - 1) == false)
			{
				//printf("debug00600\n");
				map[ques[pin].x][ques[pin].y - 1] = map[ques[pin].x][ques[pin].y] + 1;
				ques[end].x = ques[pin].x;
				ques[end].y = ques[pin].y-1;
				end++;
				if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
				{
					//printf("debug should be break");
					break;
				}
			}
		if (ques[pin].x == x_big+203 && ques[pin].y == y_big+203)
		{
			//printf("debug should be break");
			break;
		}
		pin++;
		j++;
	}
	int debug_start = 399;
	int debug_end = 406;
	i = debug_start;;
	j = debug_start;
	while (i < debug_end)
	{
		j = debug_start;
		printf("debug:");
		while (j < debug_end)
		{
			printf(" %4d",map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
	while (i < 100)
	{
		printf("que:(%d,%d)\n",ques[i].x,ques[i].y);
		i++;
	}
	if (map[x_big+203][y_big+203] == BIG)
	{
		printf("-1\n");
		return(0);
	}
	printf("%d\n",map[x_big+203][y_big+203]);
	return (0);
}
