#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return (0);
	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	return (i);
}
