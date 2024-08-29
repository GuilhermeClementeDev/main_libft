#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int i;

  if (s[0] == '\0')
    return ((char *)s);
  i = ft_strlen(s);

  while (i != 0)
  {
    if (s[i] == c)
      return ((char *)&s[i]);
    i--;  
  }
  return (0);
}

/*int main()
{
  printf("%s\n", strrchr("vascdo da gama", 'd'));
  printf("%s\n", ft_strrchr("vascdo da gama", 'd'));
}*/