#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char strl[6];
	char strr[6];
	scanf("%c%c%c%c",&strl[0],&strl[1],&strr[0],&strr[1]);
	strl[2] = '\0';
	strr[2] = '\0';
	if (atoi(strl) == 0 && atoi(strr)>= 13)
	{
		printf("NA\n");
		return (0);
	}
	else if (atoi(strr) == 0 && atoi(strl) >= 13)
	{
		printf("NA\n");
		return (0);
	}
	else if ((atoi(strl) >= 13 && atoi(strr) >= 13 )||
			(atoi(strl)==0 && atoi(strr)==0))
	{
		printf("NA\n");
		return (0);
	}
	else if (atoi(strl) <= 12 && (atoi(strr) >= 13 || atoi(strr)==0))
	{
		printf("MMYY\n");
		return (0);
	}
	else if ((atoi(strl) >= 13||atoi(strl)==0) && atoi(strr) <= 12)
	{
		printf("YYMM\n");
		return (0);
	}
	else
	{
		printf("AMBIGUOUS\n");
		return (0);
	}
	return(0);
}
