#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (!dst || !src)
		return (0);
	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		i = 0;
		while (*(src + 1) && i < (size - 1))
		{
			*(dst + 1) = *(src + 1);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
