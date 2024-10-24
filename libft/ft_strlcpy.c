#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(int ac, char **av)
{
	char *dest;
	size_t i = 15;
	printf("%ld", ft_strlcpy(dest, av[1], i));
}*/
