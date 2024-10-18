/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:57:37 by jopedro-          #+#    #+#             */
/*   Updated: 2024/10/18 16:04:30 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = s;
	while (n > 0)
	{
		*ptr++ = (unsigned char) c;
		--n;
	}
	return (s);
}
