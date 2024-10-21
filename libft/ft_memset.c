#include "libtf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = s;
	while (n > 0)
	{
		*ptr++ = (unsigned char) c;
		--n;
	}
	return (s);
}
