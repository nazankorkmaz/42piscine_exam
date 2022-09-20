#include<stdio.h>

void ft_strrepl(char *s, char a, char b)
{
	int i;

	i=0;
	while(s[i] != '\0')
	{
		if(s[i] == a)
			s[i] = b;
		i++;
	}
}
int main(void)
{
	char a[] = "change words in the string";
	ft_strrepl(a,'e','x');
	printf("%s",a);
}
