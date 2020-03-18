#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*strrev(char *str)
{
	char *p1, *p2;

	if (!str || !*str)
		return (str);
	for (p1 = str, p2 = str + strlen(str) -1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return (str);
}

char *add_back(char *str, char c)
{
	int index = 0;
	while (str[index] != '\0')
		index++;
	str[index] = c;
	str[index +1] = '\0';
	return str;
}

char *add_front(char *str, char c)
{
	int index = 0;
	while (str[index] != '\126')
		index++;
	str[index] = c;
	str[index -1] = '\126';
	return str;
}

int		main(void)
{
	char str[100001];
	char buf_str[500002];
	int q;

	scanf("%s", str);
	scanf("%d", &q);
	memset(buf_str, '0', 500002);
	buf_str[500001] = '\0';

	int index = 0;
	
	while (str[index] != '\0')
	{
		buf_str[230001 + index] = str[index];
		index++;
	}
	buf_str[230001+index] = '\0';
	buf_str[230000] = '\126';

	int dq;
	int f;
	char c;
	int flag = 1;

	index = 0;
	while (index <q)
	{
		scanf("%d", &dq);
		if (dq == 1)
		{
			flag = flag * (-1);
		}
		else if (dq == 2)
		{
			scanf("%d %c", &f, &c);
			if ((f == 1 && flag == 1) || (f == 2 && flag == -1))
				add_front(buf_str, c);
			else if ((f == 2 && flag ==1) || (f == 1 && flag == -1))
				add_back(buf_str, c);
		}
		index++;
	}
	index = 0;
	while (buf_str[index] != '\126')
		index++;
	char *r_str = &buf_str[index +1];
	if (flag == -1)
	{
		index = 500000;
		while (buf_str[index] != '\0')
		{
			index = index - 1;
		}
		index = index - 1;
		while (buf_str[index] != '\126')
		{
			putchar_unlocked(buf_str[index]);
			index = index -1;
		}
	}
	else
		printf("%s\n",r_str);
	return (0);
}
