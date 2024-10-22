#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	n;

	if (!s)
		return (0);
	n = ft_strlen(s);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
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
	printf("ft_strchr => %s\n", ft_strchr(argv[1], argv[2][0]));
	return (0);
}*/
