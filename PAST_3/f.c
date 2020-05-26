#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int

int main(void)
{
	int n;
	scanf("%d",&n);
	char **str;
	str = (char **)malloc(sizeof(char *)*(n+2));
	int i = 0;
	while (i < n+2)
	{
		str[i] = (char *)malloc(sizeof(char *)*(n+2));
		i++;
	}
	i = 0;
	while (i < n)
	{
		scanf("%s",str[i]);
		str[i][n] = '\0';
		i++;
	}
	if (n == 1)
	{
		printf("%s\n",str[0]);
		return (0);
	}
	//printf("debug 000100\n");
	char *out;
	out = (char *)malloc(sizeof(char)*(n+2));
	out[n] = '\0';
	if (n%2 != 0)
	{
		out[n/2]=str[n/2][0];
	}
	//printf("debug 000200\n");
	i = 0;
	int j = 0;
	int l = 0;
	char memo = '0';
	while (i < n/2)
	{
		memo = '0';
		//printf("debug i%d\n",i);
		l = 0;
		j = 0;
		while (j < n)
		{
			l = 0;
			while (l < n)
			{
				if (str[i][j] == str[n-i-1][l])
				{
					memo = str[i][j];
					break;
				}
				l++;
			}
			j++;
		}
		if (memo == '0')
		{
			printf("-1\n");
			return(0);
		}
		else
		{
			out[i] = memo;
			out[n-i-1] = out[i];
			//printf("debug'%c'\n",memo);
		}
		i++;
	}
	printf("%s\n",out);
	return (0);
}
