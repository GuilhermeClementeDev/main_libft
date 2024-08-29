#include "libft.h"

 int ft_atoi(const char *nptr)
 {
    int i;
    int result;
    int neg;

    result = 0;
    neg = 1;
    i = 0;
    while (nptr[i] <= 32)
      i++;
    if(nptr[i] == '+' || nptr[i] == '-')
    { 
       if (nptr[i] == '-')
        neg *= -1;
      i++;
    }  
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
      result = result * 10 + (nptr[i] - '0');
      i++;
    } 
    return (result * neg);     
 }

/*int main ()
 {
    printf("%d\n", ft_atoi("\f12a345"));
    printf("%d\n", atoi("\f12a345"));
 }*/