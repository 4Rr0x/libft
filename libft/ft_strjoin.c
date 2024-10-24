#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, len + 1);
	ft_strlcat(dst, s2, len + 1);
	return (dst);
}
