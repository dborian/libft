/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:18 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
int	main (int argc,char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isalpha = %d\n", ft_isdigit(argv[1][0]));
	printf("isdigit = %d\n", isdigit(argv[1][0]));
	return (0);
}*/
