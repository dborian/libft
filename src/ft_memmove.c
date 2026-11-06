/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:17:21 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 21:21:22 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = -1;
		while (++i < n)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	}
	else
	{
		i = n;
		while (i-- > 0)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	}
	return (dest);
}
