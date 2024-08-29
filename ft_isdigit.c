#include "libft.h"

int ft_isdigit(int c)
{
  if(c >= '0' && c <= '9')
    return (1);
  else
    return (0);  
}

/*#include <ctype.h> 
#include <stdio.h> 

int main() 
{ 
  int c = '8'; 
  printf("%d\n", ft_isdigit(c));
  printf("%d\n", isdigit(c));
  printf("%d\n", ft_isdigit(1));
  printf("%d\n", isdigit(1));
  printf("%d\n", ft_isdigit('a'));
  printf("%d\n", isdigit('a'));
  
  return 0; 
}*/