#include<unistd.h>

int check1(char *s, char c)
{
  int i;
  i=0;
  while(s[i] != '\0')
    {
      if(s[i] == c)
        return(1);
      i++;
    }
  return(0);
}
int check2(char *s, char c, int k)
{
  int i;

  i=0;
  while(i<k)
    {
      if(s[i]==c)
        return(0);
      i++;
    }
  return(1);
}
int main(int ac, char **av)
{
  if(ac==3)
  {
    int i;

    i=0;
    while(av[1][i]!= '\0')
      {
        if(check1(av[2],av[1][i])==1)
        {
          if(check2(av[1],av[1][i],i)==1)
            write(1, &av[1][i],1);
        }
        i++;
      }
  }
  write(1,"\n",1);
}
