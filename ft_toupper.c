/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:15 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:34 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
   int	main(int argc, char **argv)
   {
   if (argc != 2)
   {
   return(0);
   }
   printf("stp = %c\n", ft_toupper(argv[1][0]));
   return (0);
   }
 */
