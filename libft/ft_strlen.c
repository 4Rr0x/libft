#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main (void)
{
	char *str = "teste";
	printf("%li", ft_strlen(str));
}*/
