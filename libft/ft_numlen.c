#include "libft.h"

int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
