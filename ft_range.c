#include<stdlib.h>
#include<stdio.h>

int ft_abs(int x)
{
  if(x <0)
    x *=-1;
  return(x);
}
int     *ft_range(int start, int end)
{
  int *d;
  int size;
  int i;
  int *tab;

  i=0;
  size= ft_abs(end-start)+1;
  d= (tab=malloc(size * sizeof(int)));

  if(!d)
    return(0);
  if(size == 1)
    tab[i]=start;
  if(start <end)
  {
    while(i<size)
      {
        tab[i]= start +i;
        i++;
      }
  }
  else if(end < start)
  {
    while(i< size)
      {
        tab[i]= start -i;
        i++;
      }
  }
  return(tab);
}
int main(void)
{
  int *tab;
  int size;
  int i;
  int end;
  int start;

  end=-5;
  start=-5;
  i=0;
  size= ft_abs(end-start)+1;
  tab=ft_range(start,end);
  while(i <size)
    {
      printf("%d ",tab[i]);
      i++;
    }
}
