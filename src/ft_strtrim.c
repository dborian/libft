/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:17:43 by dedme             #+#    #+#             */
/*   Updated: 2024/11/28 19:34:43 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s1, const char *set)
{
	int	start;
	int	j;

	j = 0;
	start = 0;
	while (s1[start] != '\0')
	{
		while (set[j] != '\0' && s1[start] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		j = 0;
		start++;
	}
	return (start);
}

static int	ft_end(const char *s1, const char *set, int start)
{
	int	end;
	int	j;

	j = 0;
	end = ft_strlen(s1) - 1;
	while (end >= start)
	{
		while (set[j] != '\0' && s1[end] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		j = 0;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		sne[2];
	char	*str;

	if (!s1)
		return (NULL);
	sne[0] = ft_start(s1, set);
	sne[1] = ft_end(s1, set, sne[0]);
	str = malloc(sizeof(char) * (sne[1] - sne[0]) + 2);
	if (!str)
		return (NULL);
	j = 0;
	while (sne[0] <= sne[1])
	{
		str[j] = s1[sne[0]];
		j++;
		sne[0]++;
	}
	str[j] = '\0';
	return (str);
}
