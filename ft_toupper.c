#include "libft.h"

int ft_toupper(int c)
{
  if(c >= 'a' && c <= 'z')
    c -= 32;
  return (c);
}

/*int main()
{
  int c = '8'; 
  printf("%d\n",ft_toupper(c));
  printf("%d\n", toupper(c));
  printf("%d\n",ft_toupper(10));
  printf("%d\n", toupper(10));
  printf("%d\n",ft_toupper('a'));
  printf("%d\n", toupper('a'));
  
}*/