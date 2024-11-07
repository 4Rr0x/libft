/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:20:32 by jopedro-          #+#    #+#             */
/*   Updated: 2024/11/07 13:21:41 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
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
