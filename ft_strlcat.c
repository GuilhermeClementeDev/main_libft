#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  int i;
  size_t k;
  size_t size_return;
  size_return += ft_strlen(src);
  k = 0;
  i = 0;
  if (size <= 0)
    return(size + size_return);
  while (dst[i])
    i++;
  while (src[k] && k < size - i - 1)
  {
    dst[i + k] = src[k];
    k++;
  }
  dst[i + k] = '\0';
  return (size_return + size);
}

int main()
{
  char arr[50] = {"O Maior do mundo"};
  char src[] = {"Vasco da gama"};

  printf ("%ld", strlcat(arr, src, 50));
  printf ("%ld", ft_strlcat (arr, src, 50));
}