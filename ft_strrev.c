#include<stdio.h>

char    *ft_strrev(char *str)
{
  int i;
  int len;

  len=0;
  i=0;
  while(str[len] != '\0')
    len++;
  len -= 1;
  while(len>i)
    {
      char temp;
      temp = str[i];
      str[i] = str[len];
      str[len]= temp;
      len--;
      i++;
    }
  return(str);
}
int main(void)
{
  char a[]="hello";
  printf("%s",ft_strrev(a));
}
