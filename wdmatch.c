#include<unistd.h>

int len(char *s)
{
  int i;
  
  i=0;
      while(s[i] != '\0')
          i++;
  return(i);
}
void yaz(char *s)
{
  int i;
  
  i=0;
      while(s[i] != '\0')
        {
          write(1, &s[i],1);
          i++;
        }
}
int main(int ac, char **av)
{
  if(ac==3)
  {
    int i;
    int j;
    int w;

    i=0;
    j=0;
    w=0;
   while(av[1][i] != '\0')
      {
        while(av[2][j] != '\0')
          {
            if(av[1][i] == av[2][j])
            {
              w++;
              break;
            }
            j++;
          }
        i++;
      }
    if(len(av[1]) == w)
    {
      yaz(av[1]);
    }
  }
  write(1,"\n",1);
}
