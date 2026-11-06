/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:17 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:22 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	else
		return (0);
}
/*
int	main (int argc,char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isalpha = %d\n", ft_isalpha(argv[1][0]));
	printf("isalpha = %d\n", isalpha(argv[1][0]));
	return (0);
}*/
