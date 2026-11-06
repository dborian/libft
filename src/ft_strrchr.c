/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:14:58 by dedme             #+#    #+#             */
/*   Updated: 2024/11/25 22:18:52 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == (const char)c)
			j = i;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	else if (j != -1)
		return ((char *)&s[j]);
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
