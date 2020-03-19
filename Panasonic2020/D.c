#include <stdio.h>
#include <string.h>

char strmax(char *str, int len)
{
	int index = 0;
	char max_c = str[0];
	while (index < len)
	{
		if(max_c < str[index])
			max_c = str[index];
		index++;
	}
	return (max_c);
}

int isvalid(char *str, int n)
{
	int index = 1;
	int j = 0;
	if (str[0] != 'a')
		return (0);
	while (index < n)
	{
		if (strmax(str,index) + 1 < str[index])
			return(0);
		index++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "aaaaaaaaaa";
	int n = 0;
	int index = 0;
	int j,k,l,m,o,p,q,r,s,t;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("a\n");
		return 0;
	}
	str[n] = '\0';
	if (n == 2)
	{
		printf("aa\nab\n");
		return (0);
	}
	if (n == 3)
	{
		q=0;
		while(q<n-2)
		{
			str[n-3] = str[n-3] +q;
			r=0;
			while(r<n-1)
			{
				str[n-2] = str[n-2] +r;
				s=0;
				while(s<n)
				{
					str[n-1] = str[n-1]+s;
					if(isvalid(str,3) == 1)
						printf("%s\n",str);
					str[n-1] = 'a';
					s++;
				}
				str[n-2] = 'a';
				r++;
			}
			str[n-3] = 'a';
			q++;
		}
		return 0;
	}
if (n == 4)
	{
		p=0;
		while(p<n-3)
		{
			str[n-4] = str[n-4] +p;
			q=0;
			while(q<n-2)
			{
				str[n-3] = str[n-3] +q;
				r=0;
				while(r<n-1)
				{
					str[n-2] = str[n-2] +r;
					s=0;
					while(s<n)
					{
						str[n-1] = str[n-1]+s;
						if(isvalid(str,n) == 1)
							printf("%s\n",str);
						str[n-1] = 'a';
						s++;
					}
					str[n-2] = 'a';
					r++;
				}
				str[n-3] = 'a';
				q++;
			}
			str[n-4] = 'a';
			p++;
		}
		return 0;
	}
if (n == 5)
	{
		o=0;
		while(o<n-4)
		{
			str[n-5] = str[n-5] +o;
			p=0;
			while(p<n-3)
			{
				str[n-4] = str[n-4] +p;
				q=0;
				while(q<n-2)
				{
					str[n-3] = str[n-3] +q;
					r=0;
					while(r<n-1)
					{
						str[n-2] = str[n-2] +r;
						s=0;
						while(s<n)
						{
							str[n-1] = str[n-1]+s;
							if(isvalid(str,n) == 1)
								printf("%s\n",str);
							str[n-1] = 'a';
							s++;
						}
						str[n-2] = 'a';
						r++;
					}
					str[n-3] = 'a';
					q++;
				}
				str[n-4] = 'a';
				p++;
			}
			str[n-5] = 'a';
			o++;
		}
		return 0;
	}
if (n == 6)
	{
		m=0;
		while(m<n-5)
		{
			str[n-6] = str[n-6] +m;
			o=0;
			while(o<n-4)
			{
				str[n-5] = str[n-5] +o;
				p=0;
				while(p<n-3)
				{
					str[n-4] = str[n-4] +p;
					q=0;
					while(q<n-2)
					{
						str[n-3] = str[n-3] +q;
						r=0;
						while(r<n-1)
						{
							str[n-2] = str[n-2] +r;
							s=0;
							while(s<n)
							{
								str[n-1] = str[n-1]+s;
								if(isvalid(str,n) == 1)
									printf("%s\n",str);
								str[n-1] = 'a';
								s++;
							}
							str[n-2] = 'a';
							r++;
						}
						str[n-3] = 'a';
						q++;
					}
					str[n-4] = 'a';
					p++;
				}
				str[n-5] = 'a';
				o++;
			}
			str[n-6] = 'a';
			m++;
		}
		return 0;
	}

	if (n == 7)
	{
		l=0;
		while(l<n-6)
		{
			str[n-7] = str[n-7] + l;
			m=0;
			while(m<n-5)
			{
				str[n-6] = str[n-6] +m;
				o=0;
				while(o<n-4)
				{
					str[n-5] = str[n-5] +o;
					p=0;
					while(p<n-3)
					{
						str[n-4] = str[n-4] +p;
						q=0;
						while(q<n-2)
						{
							str[n-3] = str[n-3] +q;
							r=0;
							while(r<n-1)
							{
								str[n-2] = str[n-2] +r;
								s=0;
								while(s<n)
								{
									str[n-1] = str[n-1]+s;
									if(isvalid(str,n) == 1)
										printf("%s\n",str);
									str[n-1] = 'a';
									s++;
								}
								str[n-2] = 'a';
								r++;
							}
							str[n-3] = 'a';
							q++;
						}
						str[n-4] = 'a';
						p++;
					}
					str[n-5] = 'a';
					o++;
				}
				str[n-6] = 'a';
				m++;
			}
			str[n-7] = 'a';
			l++;
		}
		return 0;
	}

	if (n == 8)
	{
		k=0;
		while (k<n-7)
		{
			str[n-8] = str[n-8] + k;
			l=0;
			while(l<n-6)
			{
				str[n-7] = str[n-7] + l;
				m=0;
				while(m<n-5)
				{
					str[n-6] = str[n-6] +m;
					o=0;
					while(o<n-4)
					{
						str[n-5] = str[n-5] +o;
						p=0;
						while(p<n-3)
						{
							str[n-4] = str[n-4] +p;
							q=0;
							while(q<n-2)
							{
								str[n-3] = str[n-3] +q;
								r=0;
								while(r<n-1)
								{
									str[n-2] = str[n-2] +r;
									s=0;
									while(s<n)
									{
										str[n-1] = str[n-1]+s;
										if(isvalid(str,n) == 1)
											printf("%s\n",str);
										str[n-1] = 'a';
										s++;
									}
									str[n-2] = 'a';
									r++;
								}
								str[n-3] = 'a';
								q++;
							}
							str[n-4] = 'a';
							p++;
						}
						str[n-5] = 'a';
						o++;
					}
					str[n-6] = 'a';
					m++;
				}
				str[n-7] = 'a';
				l++;
			}
			str[n-8] = 'a';
			k++;
		}
		return 0;
	}
if (n == 9)
	{
		j=0;
		while (j<n-8)
		{
			str[n-9] = str[n-9] + j;
			k=0;
			while (k<n-7)
			{
				str[n-8] = str[n-8] + k;
				l=0;
				while(l<n-6)
				{
					str[n-7] = str[n-7] + l;
					m=0;
					while(m<n-5)
					{
						str[n-6] = str[n-6] +m;
						o=0;
						while(o<n-4)
						{
							str[n-5] = str[n-5] +o;
							p=0;
							while(p<n-3)
							{
								str[n-4] = str[n-4] +p;
								q=0;
								while(q<n-2)
								{
									str[n-3] = str[n-3] +q;
									r=0;
									while(r<n-1)
									{
										str[n-2] = str[n-2] +r;
										s=0;
										while(s<n)
										{
											str[n-1] = str[n-1]+s;
											if(isvalid(str,n) == 1)
												printf("%s\n",str);
											str[n-1] = 'a';
											s++;
										}
										str[n-2] = 'a';
										r++;
									}
									str[n-3] = 'a';
									q++;
								}
								str[n-4] = 'a';
								p++;
							}
							str[n-5] = 'a';
							o++;
						}
						str[n-6] = 'a';
						m++;
					}
					str[n-7] = 'a';
					l++;
				}
				str[n-8] = 'a';
				k++;
			}
			str[n-9] = 'a';
			j++;
		}
		return 0;
	}

	if (n == 10)
	{
		j=0;
		while (j<n-8)
		{
			str[n-9] = str[n-9] + j;
			k=0;
			while (k<n-7)
			{
				str[n-8] = str[n-8] + k;
				l=0;
				while(l<n-6)
				{
					str[n-7] = str[n-7] + l;
					m=0;
					while(m<n-5)
					{
						str[n-6] = str[n-6] +m;
						o=0;
						while(o<n-4)
						{
							str[n-5] = str[n-5] +o;
							p=0;
							while(p<n-3)
							{
								str[n-4] = str[n-4] +p;
								q=0;
								while(q<n-2)
								{
									str[n-3] = str[n-3] +q;
									r=0;
									while(r<n-1)
									{
										str[n-2] = str[n-2] +r;
										s=0;
										while(s<n)
										{
											str[n-1] = str[n-1]+s;
											if(isvalid(str,n) == 1)
												printf("%s\n",str);
											str[n-1] = 'a';
											s++;
										}
										str[n-2] = 'a';
										r++;
									}
									str[n-3] = 'a';
									q++;
								}
								str[n-4] = 'a';
								p++;
							}
							str[n-5] = 'a';
							o++;
						}
						str[n-6] = 'a';
						m++;
					}
					str[n-7] = 'a';
					l++;
				}
				str[n-8] = 'a';
				k++;
			}
			str[n-9] = 'a';
			j++;
		}
		return 0;
	}
}
