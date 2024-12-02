/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:23:55 by dedme             #+#    #+#             */
/*   Updated: 2024/11/07 13:16:28 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	v;

	v = 1;
	nb = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-')
		v = -1 + (i++ *0);
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i++] - 48);
	}
	return (nb * v);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_atoi = %d\natoi = %d\n", ft_atoi(argv[1]), atoi(argv[1]));
	return (0);
}*/
