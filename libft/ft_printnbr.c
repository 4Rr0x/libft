#include "libft.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_itoa(n);
	len = ft_putstr_fd(nbr, 1);
	free(nbr);
	return (len);
}
