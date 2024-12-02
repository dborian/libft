/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:26 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (8);
	else
		return (0);
}
/*
int	main (int argc,char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isalnum = %d\n", ft_isalnum(argv[1][0]));
	printf("isalnum = %d\n", isalnum(argv[1][0]));
	return (0);
}*/
