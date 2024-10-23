#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		dst[j++] = s1[i];
	i = -1;
	while (s2[++i])
		dst[j++] = s2[i];
	dst[j] = '\0';
	return (dst);
}
