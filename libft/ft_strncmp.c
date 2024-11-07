/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:20:44 by jopedro-          #+#    #+#             */
/*   Updated: 2024/11/07 13:21:45 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0') && (s2[i] != '\0')
		&& (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Usage: %s s1 s2 n\n", argv[0]);
		return EXIT_FAILURE;
	}

	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

	return EXIT_SUCCESS;
}*///
