/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:35:01 by jopedro-          #+#    #+#             */
/*   Updated: 2024/10/21 11:48:50 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src || !dest)
		return (NULL);
	i = 0;
	if (dest != src)
	{
		while (i < n)
		{
			(unsigned char)dest[i] = (unsigned char)src[i];	
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
