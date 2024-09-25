#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *d;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*d = (unsigned char)c;
		d++;
		i++;
	}
	return (s);
}
int main()
{
	int arr[10];
	//memset(arr,2,sizeof(int) *10);
	ft_memset(arr,2,sizeof(int) * 10);
	int i = 0;
	while (i < 10)
	{
		printf("%d- %d\n",i ,arr[i]);
		i++;
	}
}
