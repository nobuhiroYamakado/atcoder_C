#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define lli long long int
int c_f(const void *a, const void *b)
{
	return(*(char*)a - *(char*)b);
}

int s_f(const void *a, const void *b)
{
	return(strcmp(*(char **)a, *(char **)b));
}
int main(void)
{
	int n;
	scanf("%d",&n);
	char **s;
	s = (char**)malloc(sizeof(char *)*(n));
	int i = 0;
	int j = 0;
	while (i < n)
	{
		s[i] = (char *)malloc(sizeof(char)*(12));
		j = 0;
		while (j < 12)
		{
			s[i][j] = '\0';
			j++;
		}
		scanf("%s",s[i]);
		qsort(s[i],10,sizeof(char),c_f);
		i++;
	}
	i = 0;
	qsort(s,n,sizeof(char *),s_f);
	//printf("degbug001000\n");
	i = 0;
	j = 0;
	lli cnt = 0;
	lli tmp = 0;
	lli t = 0;
	while (i < n-1)
	{
		j = i+1;
		tmp = 1;
		while (j < n && strcmp(s[i],s[j]) == 0 && j < n)
		{
			//printf("debug:i:%d, j:%d\n",i,j);
			//printf("debug:s_i:%s\n",s[i]);
			//printf("debug:s_j:%s\n",s[j]);
			tmp++;
			j++;
		}
		//printf("debug:cnt:%lld, tmp:%lld\n",cnt,tmp);
		t = tmp -1;
		cnt+=(((1+t)*t)/2);
		i+=tmp;
	}
	printf("%lld\n",cnt);

	return(0);
}

