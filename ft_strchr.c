/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:14:58 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 17:54:15 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == (const char)c)
			return ((char *)&s[i]);
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("ft_strchr = %s\nstrchr = %s\n",
	ft_strchr(argv[1],argv[2][0]),strchr(argv[1],argv[2][0]));
	return (0);
}
*/
