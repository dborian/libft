/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:46:31 by dedme             #+#    #+#             */
/*   Updated: 2024/11/26 17:07:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size == 0 || size <= len)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && (i + len + 1) < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = 0;
	return (ft_strlen(src) + len);
}
/*
int	main(void)
{
	char	*src;
	char	dst1[50];
	char	dst2[50];

	src = "lorem ipsum dolor sit amet";
	dst1[10] = 'a';
	dst2[10] = 'a';
	printf("ft_strlcat = %zu\nstrlcat = %zu\n\n",
		ft_strlcat(dst1, src, 6), strlcat(dst2, src, 6));
	printf("ft_strlcat = %s\nstrlcat = %s\n\n", dst1, dst2);
	return (0);
}*/