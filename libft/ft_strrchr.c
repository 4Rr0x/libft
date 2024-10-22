#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	n;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	while (i < len)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			n = i;
		i++;
	}
	if (n > 0)
		return ((char *)s + n);
	return (0);
}
/*
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (0);
	}
// Tests
	printf("ft_strchr => %s\n", ft_strrchr(argv[1], argv[2][0]));
	return (0);
}*/
