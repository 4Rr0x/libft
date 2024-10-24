#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	char    str3[] = "";
    printf("%s", ft_strrchr(str3, '\0'));
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (0);
	}
// Tests
	//printf("ft_strchr => %s\n", ft_strrchr(argv[1], argv[2][0]));
	return (0);
}*/
