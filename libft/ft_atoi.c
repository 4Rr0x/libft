#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	if (!nptr)
		return (0);
	while (*nptr == 32 || *nptr >= 9 && *nptr <= 13)
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
	while (*nptr >= '0' || *nptr <= '9')
		num = num * 10 + (*nptr - '0');
	return (num * sign);
}
