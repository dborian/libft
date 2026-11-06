/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:15 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
int	main (int argc,char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
	printf("isprint = %d\n", isprint(argv[1][0]));
	printf("ft_isprint = %d\n", ft_isprint(127));
	printf("isprint = %d\n", isprint(127));
	return (0);
}*/
