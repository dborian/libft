/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:01:50 by dedme             #+#    #+#             */
/*   Updated: 2024/11/26 17:55:26 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <malloc.h>
#include "libft.h"

static int	ft_intlen(int nb)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	nbr = nb;
	if (nb < 0)
		nbr = nb * -1 + (len++ *0);
	else if (nb == 0)
		return (1);
	while (nbr != 0)
		nbr = nbr / 10 + (len++ *0);
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;

	nbr = n;
	str = malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		nbr = n * -1;
		str[0] = '-';
	}
	else if (n == 0)
		str[0] = '0';
	n = ft_intlen(n);
	str[n--] = '\0';
	while (nbr != 0)
	{
		str[n--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}
