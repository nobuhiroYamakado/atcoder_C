#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define lli long long int
#define MAX(a,b) (((a)>(b))?(a):(b))
typedef struct s_day
{
	lli a;
	lli b;
	lli c;
	char y;
	char t;
} t_day;

int main(void)
{
	lli n;
	scanf("%lld", &n);
	lli index = 0;
	t_day days[n+1];
	days[0].y = 'd';
	while (index < n)
	{
		scanf("%lld %lld %lld", &(days[index].a), &(days[index].b), &(days[index].c));
		index++;
	}

	index = 1;
	while (index < n)
	{
		days[index].a = days[index].a + MAX(days[index-1].b,days[index-1].c);
		days[index].b = days[index].b + MAX(days[index-1].c,days[index-1].a);
		days[index].c = days[index].c + MAX(days[index-1].a,days[index-1].b);
		index++;
	}
	lli max = MAX(days[n-1].a, days[n-1].b);
	max = MAX(max, days[n-1].c);
	
	printf("%lld", max);

	return (0);
}
