#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define lli long long int

char f(char **s, int i)
{
	int j = 4*i;
	if (strncmp(&(s[0][j]),"..#.",4) == 0)
		return ('1');
	if (strncmp(&(s[0][j]),".#.#",4) == 0)
		return ('4');
	if (strncmp(&(s[2][j]),".#.#",4) == 0)
		return ('0');
	if (strncmp(&(s[2][j]),"...#",4) == 0)
		return ('7');
	if (strncmp(&(s[3][j]),".#..",4) == 0)
		return ('2');
	if (strncmp(&(s[3][j]),"...#",4) == 0 && strncmp(&(s[1][j]),"...#",4) == 0)
		return ('3');
	if (strncmp(&(s[3][j]),"...#",4) == 0 && strncmp(&(s[1][j]),".#.#",4) == 0)
		return ('9');
	if (strncmp(&(s[3][j]),"...#",4) == 0)
		return ('5');
	if (strncmp(&(s[3][j]),".#.#",4) == 0 && strncmp(&(s[1][j]),".#..",4) == 0)
		return ('6');
	return ('8');
}

int main(void)
{
	int n;
	scanf("%d", &n);
	char **s;
	s = (char **)malloc(sizeof(char *)*(6));
	char *out;
	out = (char *)malloc(sizeof(char)*(n+1));
	out[n] = '\0';

	int i = 0;
	while (i < 5)
	{
		s[i] = (char *)malloc(sizeof(char)*(4*n+3));
		scanf("%s",s[i]);
		s[i][4*n+1] = '\0';
		i++;
	}
	i = 0;
	int j = 0;
	int k = 0;

	while (i < 5)
	{
		//printf("debug : %s\n",s[i]);
		i++;
	}
	i = 0;

	while (i < n)
	{
		out[i] =f(s,i);
		i++;
	}
	printf("%s\n",out);
	return (0);
}
