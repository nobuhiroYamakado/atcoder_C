#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define lli long long int

#define MAX(a,b) ((a>b)?(a):(b))


void char_append(char *s, char c)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s[i] = c;
	s[i+1] = '\0';
}

bool is_char_in_str(char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (true);
		i++;
	}
	return (false);
}
char *ignore_str(char *str, char *sub_str)
{
	int i = 0;
	int j = 0;
	while (sub_str[i] != '\0')
	{
		while (str[j]!= sub_str[i])
				j++;
		i++;
		j++;
	}
	return(&(str[j]));
}

int	main(void)
{
	char s[3002];
	char t[3002];
	
	scanf("%s",s);
	scanf("%s",t);
	lli len_s = strlen(s);
	lli len_t = strlen(t);
	lli len = MAX(len_s,len_t);
	//printf("strlen_s:%lld, t:%lld\n",len_s, len_t);

	char dp[len+1][3002];

	lli i, j;
	lli index = 0;
	while (index < len + 1)
	{
		dp[0][0] = '\0';
		index++;
	}
	index = len_s;
	while (index <= len)
	{
		s[index] = '\0';
		index++;
	}
	index = len_t;
	while (index <= len)
	{
		t[index] = '\0';
		index++;
	}

	i = 1;
	char short_s[3002];
	char short_t[3002];
	while (i <= len)
	{
		strcpy(dp[i],dp[i-1]);
		strcpy(short_s,s);
		strcpy(short_t,t);
		short_s[i-1] = '\0';
		short_t[i-1] = '\0';
		//printf("short_s;%s,t:%s\n",short_s,short_t);
		if(s[i-1] == t[i-1])
		{
			char_append(dp[i],s[i-1]);
			//printf("EQ, i:%lld,dp:%s\n",i,dp[i]);
		}
		else if(is_char_in_str(ignore_str(short_s,dp[i-1]),t[i-1]) == true)
		{
			//printf("ig_str:%s\n",ignore_str(short_s,dp[i-1]));
			//printf("short_s:%s,dp[i];%s,t[i-1]:%c\n",short_s,dp[i],t[i-1]);
			char_append(dp[i],t[i-1]);
			//printf("tEQ, i:%lld,dp:%s\n",i,dp[i]);
		}
		else if(is_char_in_str(ignore_str(short_t,dp[i-1]),s[i-1]) == true)
		{
			char_append(dp[i],s[i-1]);
			//printf("sEQ, i:%lld,dp:%s\n",i,dp[i]);
		}
		else
		{
			//printf("nEQ, i:%lld,dp:%s\n",i,dp[i]);
		}
		i++;
	}
	//printf("debug0009\n");
	printf("%s\n",dp[len]);
	return (0);
}
