/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:13:49 by dedme             #+#    #+#             */
/*   Updated: 2024/11/29 00:17:50 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int				tab[10];
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nb * -1;
	}
	else if (nb == 0)
		ft_putchar_fd(48, fd);
	nb = -1;
	while (nbr != 0)
	{
		tab[++nb] = nbr % 10;
		nbr = nbr / 10;
	}
	while (nb >= 0)
		ft_putchar_fd(tab[nb--] + 48, fd);
}
