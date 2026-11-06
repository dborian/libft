/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:20 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main (int argc,char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
	printf("isascii = %d\n", isascii(argv[1][0]));
	printf("ft_isascii = %d\n", ft_isascii(129));
	printf("isascii = %d\n", isascii(129));
	printf("ft_isascii = %d\n", ft_isascii(128));
	printf("isascii = %d\n", isascii(128));
	return (0);
}*/
