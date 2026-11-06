/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:25:16 by dedme             #+#    #+#             */
/*   Updated: 2024/11/29 07:56:28 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s && ft_strlen(s) <= start)
		len = 0;
	else if (s && ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (!s || ft_strlen(s) <= start)
	{
		str[0] = '\0';
		return (str);
	}
	while (i < len && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
