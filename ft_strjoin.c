/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:59:10 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 17:59:40 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <malloc.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	*gazon;
	if (argc != 3)
		return (0);
	gazon = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", gazon);
	free(gazon);
	return (0);
}*/