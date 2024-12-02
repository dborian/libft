/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:15:09 by dedme             #+#    #+#             */
/*   Updated: 2024/11/29 08:08:46 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*tab;
	size_t	i;

	i = 0;
	if (element_size != 0 && element_count > (__SIZE_MAX__ / element_size))
		return (NULL);
	tab = malloc(element_count * element_size);
	if (!tab)
		return (NULL);
	while (i < element_count * element_size)
		*(unsigned char *)(tab + i++) = 0;
	return (tab);
}
