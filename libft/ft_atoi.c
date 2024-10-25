#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		if (*(nptr + 1) == '+' || *(nptr + 1) == '-')
			return (0);
		nptr++;
	}
	num = 0;
	while (*nptr >= '0' && *nptr <= '9')
		num = num * 10 + (*nptr++ - '0');
	return (num * sign);
}
/*
void	main(int ac, char** av)
{
	//int	teste = atoi(((void*)0));
	printf("%i", ft_atoi(((void*)0)));
	printf("%i", atoi(av[1]));
}*/
