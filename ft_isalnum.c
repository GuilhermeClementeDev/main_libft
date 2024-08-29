#include "libft.h"

int ft_isalnum(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else if (c >= '0' && c <= '9')
    return (1); 
  else
    return (0);  
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '1';
    int d = '1';

    printf("%d\n", isalnum(c));
    printf("%d\n", isalnum(d));
    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(d));

    return 0;
}*/