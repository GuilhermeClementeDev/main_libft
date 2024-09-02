#include "libft.h"

char * ft_strnstr(const char *big, const char *litle, size_t len)
{
  size_t i;
  int k;

  i = 0;
  if (litle[0] == '\0')
    return ((char*)big);
  while (big[i] && i < len - 1)
  {
    k = 0;
    while (big[i + k] == litle[k])
    {
      k++;
      if (litle[k] == '\0')
        return((char*)&big[i]);
    }
    i++;
  }
  return (NULL);
}

/*int main()
{
  char test[] ={"Im just TRYINg to survive"}; 
  char test_litle[] = {""};
 // printf("%s\n", ft_strnstr(test, test_litle, 1));
 // printf("%s\n", strnstr(test, test_litle, 1));
}*/