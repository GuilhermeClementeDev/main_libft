#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
  int i;

  if (str[0] == '\0')
    return ((char *)str);
  i = ft_strlen(str);

  while (i != 0)
  {
    if (str[i] == c)
      return ((char *)&str[i]);
    i--;  
  }
  return (0);
}

/*int main()
{
  printf("%s\n", strrchr("vascdo da gama", 'd'));
  printf("%s\n", ft_strrchr("vascdo da gama", 'd'));
}*/