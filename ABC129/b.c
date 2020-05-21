#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define abs(a) (((a)>0)?(a):(-1*(a)))
int main(void)
{
	int n;
	scanf("%d",&n);
	int *w;
	w = (int *)malloc(sizeof(int)*(n));
	int i = 0;
	int right = 0;
	while (i < n)
	{
		scanf("%d", &(w[i]));
		right += w[i];
		i++;
	}
	int min = 10000;
	int left = 0;
	i = 0;
	while (i < n)
	{
		left += w[i];
		right -= w[i];
		//printf("left:%d, right:%d, min:%d\n",left,right,min);
		if(min > abs(left - right))
			min = abs(left - right);
		//printf("left:%d, right:%d, min:%d\n",left,right,min);
		i++;
	}
	printf("%d\n",min);
	return(0);
}
