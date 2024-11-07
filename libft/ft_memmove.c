/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:20:17 by jopedro-          #+#    #+#             */
/*   Updated: 2024/11/07 13:21:18 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src;

	if (!src && !dest)
		return (NULL);
	if (n == 0)
		return (dest);
	c_dest = dest;
	c_src = src;
	if (c_dest < c_src)
		while (n--)
			*(c_dest++) = *(c_src++);
	else
	{
		c_dest += n;
		c_src += n;
		while (n--)
			*(--c_dest) = *(--c_src);
	}
	return (dest);
}
