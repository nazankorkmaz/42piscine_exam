#include<unistd.h>

char *ft_rev_print (char *str)
{
  int len;
  len=0;
  while(str[len] != '\0')
    len++;
  len--;
  while(len>=0)
    {
      write(1,&str[len],1);
      len--;
    }
  return(str);
}
int main(void)
{
  char a[]="korkmazlala5";
  ft_rev_print(a);
}
