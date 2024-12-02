/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:35:33 by dedme             #+#    #+#             */
/*   Updated: 2024/11/27 15:38:41 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (little[j] == big[i])
		{
			while (little[j] == big[i] && i < len)
			{
				i++;
				if (little[++j] == '\0')
					return ((char *)(big + i - j));
			}
			i -= j;
			j = 0;
		}
		i++;
	}
	return (0);
}

/*
   int	main(void)
   {
   char	tkt[50] = "uhudbofhiydshfubotisduahfu";
   char	retkt[50] = "bot";
   char	*test;

   printf("%s\n", ft_strstr(tkt, retkt));
   test = strstr(tkt, retkt);
   printf("%s\n", test);
   return (0);
   }
 */