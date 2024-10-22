#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
