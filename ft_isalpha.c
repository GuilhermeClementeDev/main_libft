#include "libft.h"

int ft_isalpha(int c)
{
  if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (1);
  else 
    return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
   char c = 'A';
    printf ("%d\n", ft_isalpha(1));
    printf ("%d\n", isalpha(c));
    printf ("%d\n", isalpha(1));
    printf ("%i\n", ft_isalpha(c));
}
*/  