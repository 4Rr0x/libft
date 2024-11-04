#include "libft.h"

char	*ft_utioa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_unumlen(n);
	nbr = (char *)malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	while (n != 0)
	{
		nbr[--len] = n % 10 + 48;
		n /= 10;
	}
	return (nbr);
}
