#include "libft.h"

char * ft_strnstr(const char *big, const char *litle, size_t len)
{
  size_t i;
  int k;

  i = 0;
  if (litle[0] == '\0')
    return ((char*)big);
  while (big[i] && i < len)
  {
    k = 0;
    while (big[i + k] == litle[k] && i + k < len)
    {
      k++;
      if (litle[k] == '\0')
        return((char*)&big[i]);
    }
    i++;
  }
  return (NULL);
}

int main()
{
  char test[] ={"Im just TRYINg to survive"}; 
  char test_litle[] = {"TRYINg"};
  printf("%s\n", ft_strnstr(test, test_litle, 14));
  printf("%s\n", strnstr(test, test_litle, 14));
}