#include "libft.h"

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127)
    return (1);
  else
    return (0);
}

/*int main()
{
  char c = 'a';
    printf ("%d\n", ft_isascii(1));
    printf ("%d\n", isascii(c));
    printf ("%d\n", isascii(1));
    printf ("%i\n", ft_isascii(c));

    return (0);
}*/