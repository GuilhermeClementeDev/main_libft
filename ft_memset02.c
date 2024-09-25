#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
  size_t i;
  unsigned  char *num_return;

  i = 0;
  num_return = s;
  while (i < n)
  {
    num_return[i] = (unsigned char)c;
    i++;
  }
  return s;
}
