/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:15 by dedme             #+#    #+#             */
/*   Updated: 2024/11/29 07:56:45 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
   int	main(int argc, char **argv)
   {
   if (argc != 2)
   {
   return(0);
   }
   printf("stp = %c\n", ft_tolower(argv[1][0]));
   return (0);
   }
 */
