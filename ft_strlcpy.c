#include "libft.h"


size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;
  size_t size_return;

  size_return = ft_strlen(src);
  if (size == 0)
    return (size_return);
  i = 0;
  while (src[i] && i < size - 1)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (size_return);
}
/* -lbsd
int main() {

    char arr[20];
    printf("%ld\n", strlcpy(arr, "testando12", 20));
     int i;
     i = 0;
     while (i != 20)
    {
      printf("%c",arr[i]);
      i++;
    }
    printf("\n");
    printf("%ld\n", ft_strlcpy(arr, "testando12", 20));
    i = 0;
    while (i != 20)
    {
      printf("%c",arr[i]);
      i++;
    }
    return (0);
}*/