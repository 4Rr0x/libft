/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:20:52 by jopedro-          #+#    #+#             */
/*   Updated: 2024/11/07 13:21:19 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_unumlen(n);
	nbr = (char *)malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	while (n != 0)
	{
		nbr[--len] = n % 10 + 48;
		n /= 10;
	}
	return (nbr);
}
