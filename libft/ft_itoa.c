#include "libft.h"

char	*fill_str(char *str, long nbr, int size)
{
	while (nbr)
	{
		*(str - size--) = nbr % 10;
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*str = 0;
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	nbr;

	size = 0;
	if (n < 0)
	{
		nbr = -n;
		size++;
	}
	else
		nbr = n;
	while (n)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	str = fill_str(str, nbr, size);
	return (str);
}
