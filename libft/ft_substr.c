#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && i < len)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
