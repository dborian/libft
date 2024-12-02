/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:58:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 18:01:34 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <malloc.h>
#include "libft.h"

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_countword(const char *str, char sep)
{
	int		c;
	int		i;
	int		v;

	c = 0;
	i = 0;
	v = 1;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
			v = 1;
		else if (v == 1 && str[i] != sep)
			v = 0 + (c++ *0);
		i++;
	}
	return (c);
}

static int	ft_sstrlen(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strrdup(const char *s, char sep)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_sstrlen(s, sep) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != sep)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	tab = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			tab[j] = ft_strrdup(&s[i], c);
			if (tab[j] == NULL)
				return (ft_free(tab));
			i = i + ft_sstrlen(&s[i], c) - 1 ;
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
   int    main(int argc, char **argv)
   {
   if (argc != 3)
   return (0);
   char **tab;
   int    i;
   int    c;

   c = ft_countword(argv[1], argv[2][0]) + 1;
   printf("%d\n", c);
   i = 0;
   tab = ft_split(argv[1], argv[2][0]);
   while (i < c)
   {
   printf("%s\n", tab[i]);
   free (tab[i++]);
   }
   free (tab);
   return (0);
   }
 */
