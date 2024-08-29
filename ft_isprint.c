#include "libft.h"

int ft_isprint(int c)
{
  if (c >= 32 && c != 127)
    return (1);
  else 
    return (0);  
}

/*int main()
{
  int c = '8'; 
  printf("%d\n", ft_isprint(c));
  printf("%d\n", isprint(c));
  printf("%d\n", ft_isprint(10));
  printf("%d\n", isprint(10));
  printf("%d\n", ft_isprint('a'));
  printf("%d\n", isprint('a'));
  
}*/