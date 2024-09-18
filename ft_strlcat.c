#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t k;
  size_t return_size;
  return_size = ft_strlen(dst) + ft_strlen(src);
  int i;
  i = ft_strlen(dst);
  k = 0;
  if (size == 0)
    return((size_t)(ft_strlen(src)));
  while (src[k] && k < size - i - 1)
  {
    dst[i + k] = src[k];
    k++;
  }
  dst[i + k] = '\0';
  return (return_size);
}

int main()
{
  char arr[50] = {"The biggest of the world: "};
  char src[] = {"Vasco da gama"};
  //printf ("%ld\n", strlcat(arr, src, 50));
  printf ("%ld\n", ft_strlcat (arr, src, 50));
  int i = 0;
  while (arr[i])
  {
    write(1,&arr[i],1);
    i++;
  }
  write(1,"\n",1);
}
