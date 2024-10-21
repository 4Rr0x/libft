/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:35:12 by jopedro-          #+#    #+#             */
/*   Updated: 2024/10/21 11:35:15 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	n;

	if (!s)
		return (0);
	n = ft_strlen(s);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (0);
	}

	// Tests
	printf("ft_strchr => %s\n", ft_strchr(argv[1], argv[2][0]));
	return (0);
}*/
