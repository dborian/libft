/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:05:55 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:01:51 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_strlen = %zu\n", ft_strlen(argv[1]));
	printf("strlen = %lu\n", strlen(argv[1]));
	return (0);
}
*/
