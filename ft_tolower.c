#include "libft.h"

int ft_tolower(int c)
{
  if(c >= 'A' && c <= 'Z')
    c += 32;
  return (c);
}

/*int main()
{
  int c = '8'; 
  printf("%d\n",ft_tolower(c));
  printf("%d\n", tolower(c));
  printf("%d\n",ft_tolower(10));
  printf("%d\n", tolower(10));
  printf("%d\n",ft_tolower('A'));
  printf("%d\n", tolower('A'));
  
}*/