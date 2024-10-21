/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:50:08 by jopedro-          #+#    #+#             */
/*   Updated: 2024/10/21 16:06:56 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2 || (n <= 0))
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] != '\0' && ((unsigned char *)s2)[i] != '\0'
			&& ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
			i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);	
}
