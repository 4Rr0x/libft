#include "libft.h"

int	ft_ptrlen(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}
