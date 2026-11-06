/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:29:07 by dedme             #+#    #+#             */
/*   Updated: 2024/12/16 14:55:48 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puttype(const char *str, va_list args)
{
	int	i;

	i = 0;
	if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str[i + 1] == 'p')
		return (ft_puthex(va_arg(args, char *)));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i + 1] == 'u')
		return (ft_putnbr2(va_arg(args, unsigned int)));
	if (str[i + 1] == 'x')
		return (ft_putnbr_base(va_arg(args, int), "0123456789abcdef"));
	if (str[i + 1] == 'X')
		return (ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF"));
	if (str[i + 1] == '%')
		return (ft_putchar('%'));
	return (ft_putchar(str[i]) + ft_putchar(str[i + 1]));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		tmp;

	tmp = 0;
	len = 0;
	i = -1;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			tmp = ft_puttype(&str[i++], args);
			if (tmp == -1)
				return (-1);
			len += tmp;
		}
		else
			ft_putchar(str[i] + (len++) * 0);
	}
	va_end(args);
	return (len);
}
