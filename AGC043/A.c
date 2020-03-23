#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct t_cell {
	int x;
	int y;
	char color;
	int num;
} a_cell;

int min(int x, int y)
{
	if (x > y)
		return (y);
	else 
		return (x);
}
int	main(void)
{
	int H,W;

	scanf("%d %d", &H, &W);
	
	struct t_cell cells[H][W];
	char str[H][W];
	int i =0;
	int j =0;
	while (i < H)
	{
		j =0;
		scanf("%s", str[i]);
		while (j<W)
		{
			cells[i][j].color = str[i][j];
			cells[i][j].x = i;
			cells[i][j].y = j;
			cells[i][j].num = (cells[i][j].color == '.')?(0):(1);
			//# is black . is white
			j++;
		}
		i++;
	}
	i =0;
	j =0;
	while (i <H)
	{
		j =0;
		while (j <W)
		{
			if (i ==0 && j ==0)
			{
				j++;
				continue;
			}
			else if (i ==0 && cells[i][j].color == '.')
				cells[i][j].num = cells[i][j-1].num;
			else if (i ==0 && cells[i][j-1].color == '#')
				cells[i][j].num = cells[i][j-1].num;
			else if (i ==0 && cells[i][j-1].color == '.')
				cells[i][j].num = cells[i][j-1].num + 1;
			else if (j ==0 && cells[i][j].color == '.')
				cells[i][j].num = cells[i-1][j].num;
			else if (j ==0 && cells[i-1][j].color == '#')
				cells[i][j].num = cells[i-1][j].num;
			else if (j ==0 && cells[i-1][j].color == '.')
				cells[i][j].num = cells[i-1][j].num + 1;
			else if (cells[i][j].color == '.')
				cells[i][j].num = min(cells[i-1][j].num,cells[i][j-1].num);
			else if (cells[i][j].color == '#' && cells[i-1][j].color =='#' && cells[i][j-1].color =='#')
				cells[i][j].num = min(cells[i-1][j].num,cells[i][j-1].num);
			else if (cells[i][j].color == '#' && cells[i-1][j].color =='#' && cells[i][j-1].color == '.')
				cells[i][j].num = min(cells[i-1][j].num,cells[i][j-1].num+1);
			else if (cells[i][j].color =='#' && cells[i-1][j].color == '.' && cells[i][j-1].color == '#')
				cells[i][j].num = min(cells[i-1][j].num+1,cells[i][j-1].num);
			else if (cells[i][j].color =='#' && cells[i-1][j].color == '.' && cells[i][j-1].color == '.')
				cells[i][j].num = min(cells[i-1][j].num,cells[i][j-1].num)+1;
			j++;
		}
		i++;
	}
	int r_num = cells[H-1][W-1].num;
	printf("%d\n",r_num);
	return(0);
}
