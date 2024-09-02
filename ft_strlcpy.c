#include "libft.h"


size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;
  size_t return_size;

  return_size = ft_strlen(src);
  if (size == 0)
    return (return_size);
  i = 0;
  while (src[i] && i < size - 1)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (return_size);
}
/* -lbsd
int main() {

    char arr[20];
    printf("%ld\n", strlcpy(arr, "testing12",10));
     int i;
     i = 0;
     while (arr[i])
    {
       write(1,&arr[i],1);
      i++;
    }
    printf("\n");
    printf("%ld\n", ft_strlcpy(arr, "testing12", 10));
    i = 0;
    while (arr[i])
    {
      write(1,&arr[i],1);
      i++;
    }
    return (0);
}*/