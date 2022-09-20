#include<unistd.h>

int main(int ac, char **av)
{
  if(ac==2)
  {
    int i;
    int j;

    j=0;
    i=0;
    while(av[1][i] != '\0')
      {
        if((av[1][i] == 32 || av[1][i] == 9) && (av[1][i+1] >= 33 && av[1][i] <= 126) )
          j= i+1;
        i++;
      }
    while(av[1][j] != '\0')
      {
       write(1, &av[1][j],1); 
        j++;
      }
  }
  write(1, "\n",1);
}
