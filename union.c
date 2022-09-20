#include<unistd.h>
int check1(char *s,char a,int l)
{
  int i;
  i=0;
  while(i<l)
    {
      if(s[i] == a)
          return(0);
      i++;
    }
  return(1);
}
int check2(char *s, char a)
{
  int i;
  i=0;
  while(s[i] != '\0')
    {
      if(s[i]== a)
        return(0);
      i++;
    }
  return(1);
}
int main(int ac, char **av)
{
  int i;

  i=0;
  if(ac==3)
  {
    while(av[1][i] !='\0')
      {
        if(check1(av[1],av[1][i],i)==1)
        {
          write(1,&av[1][i],1);
        }
        i++;
      }
    i=0;
    while(av[2][i] != '\0')
      {
        if(check2(av[1],av[2][i])==1)
        {
          if(check1(av[2],av[2][i],i)==1)
          {
            write(1,&av[2][i],1);
          }
        }
        i++;
      }
  }
  write(1,"\n",1);
}
