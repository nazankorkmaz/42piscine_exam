#include<unistd.h>

int main(int ac, char **av)
{
  if(ac ==2)
  {
    int i;

    i=0;
    while(av[1][i] != '\0')
      {
        int j;
        int a;
        if(av[1][i] >= 65 && av[1][i] <= 90)
          a= av[1][i] - 65;
        else if(av[1][i] >= 97 && av[1][i] <=122)
          a= av[1][i] - 97;
        j=0;
        while(j <=a)
          {
            write(1,&av[1][i],1);
            j++;
          }
        i++;
        a=0;
      }
  }
  write(1,"\n",1);
}
