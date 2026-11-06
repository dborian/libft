/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:14:58 by dedme             #+#    #+#             */
/*   Updated: 2024/11/27 13:57:28 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	size_t n;
	void	*str;
	char	c;
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	
	str = (void *)argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(str, c, n),(char *)memchr(str,c, n));
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(s, 0, 1),(char *)memchr(s,0, 1));
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(s, 2, 3),(char *)memchr(s,2, 3));
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(s, 6, 6),(char *)memchr(s,6, 6));
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(s, 2 + 256, 3),(char *)memchr(s,2 + 256, 3));
	printf("ft_memchr = %s\nmemchr = %s\n\n",
		(char *)ft_memchr(s, 0, 0),(char *)memchr(s,0, 0));
	return (0);
}
*/
