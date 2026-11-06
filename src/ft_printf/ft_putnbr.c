/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:23:32 by dedme             #+#    #+#             */
/*   Updated: 2024/12/16 14:59:42 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int				tab[10];
	unsigned int	nbr;
	int				v;

	v = 0;
	nbr = nb;
	if (nb < 0)
	{
		if (ft_putchar(45) == -1)
			return (-1);
		nbr = nb * -1 + (v++) * 0;
	}
	else if (nb == 0)
		return (ft_putchar(48));
	nb = -1;
	while (nbr != 0)
	{
		tab[++nb] = nbr % 10;
		nbr = nbr / 10;
	}
	while (nb >= 0)
		if (ft_putchar(tab[nb-- + (nbr++ *0)] + 48) == -1)
			return (-1);
	return (nbr + v);
}

int	ft_putnbr2(int nb)
{
	int				tab[10];
	unsigned int	nbr;

	nbr = nb;
	if (nb == 0)
		return (ft_putchar(48));
	nb = -1;
	while (nbr != 0)
	{
		tab[++nb] = nbr % 10;
		nbr = nbr / 10;
	}
	while (nb >= 0)
		if (ft_putchar(tab[nb-- + (nbr++ *0)] + 48) == -1)
			return (-1);
	return (nbr);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int				tab[25];
	unsigned int	nb;
	int				i;

	i = 0;
	nb = nbr;
	if (nbr == 0)
		return (ft_putchar(base[nbr % 16]));
	nbr = -1;
	if (nb != 0)
	{
		while (nb != 0)
		{
			tab[++nbr] = nb % 16;
			nb = nb / 16;
			while (nbr >= 0 && nb <= 0)
				if (ft_putchar(base[tab[nbr-- + (i++ *0)]]) == -1)
					return (-1);
		}
	}
	return (i);
}

int	ft_putnbr_base2(unsigned long nbr, char *base)
{
	int				tab[15];
	unsigned long	nb;
	int				i;
	int				j;

	j = 0;
	i = 0;
	nb = nbr;
	if (nbr == 0)
		return (ft_putchar(base[nbr % 16]));
	while (nb != 0)
	{
		tab[j] = nb % 16;
		j++;
		nb = nb / 16;
		while (j > 0 && nb == 0)
			if (ft_putchar(base[tab[--j + (i++) * 0]]) == -1)
				return (-1);
	}
	return (i);
}

int	ft_puthex(void *str)
{
	unsigned long	nb;
	int				len;
	int				len2;

	if (!str)
		return (ft_putstr("(nil)"));
	len = 0;
	len2 = 0;
	nb = (unsigned long)str;
	if (ft_putstr("0x") == -1)
		return (-1);
	if (len == -1)
		return (-1);
	len2 = ft_putnbr_base2(nb, "0123456789abcdef");
	if (len2 == -1)
		return (-1);
	return (len + len2 + 2);
}
