#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || len == 0)
		return (NULL);
	if (!little[0])
		return (char *)big;
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i < len)
		{
			if (!little[j + 1])
				return ((char *)(big + 1));
			j++;
		}
		i++;
	}
	return (NULL);
}
