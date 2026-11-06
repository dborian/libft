/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:58:01 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 18:00:08 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <malloc.h>
#include "libft.h"

static int	ft_sstrlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = -1;
	str = malloc(sizeof(char) * ft_sstrlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++i] != '\0')
	{
		str[i] = s[i];
	}
	str[i] = '\0';
	return (str);
}
/*
   int	main(int argc, char **argv)
   {
   char	*str;

   if (argc != 2)
   return (0);
   str = ft_strdup(argv[1]);
   printf("str = %s\n", str);
   free(str);
   return (0);
   }*/
