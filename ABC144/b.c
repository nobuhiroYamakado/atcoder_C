#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a = 1;
	int b = 1;
	while (a<=9)
	{
		b = 1;
		while (b <=9)
		{
			if(a*b == n)
			{
				printf("Yes\n");
				return(0);
			}
			b++;
		}
		a++;
	}
	printf("No\n");
	return(0);
}
