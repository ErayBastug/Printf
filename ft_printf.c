/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:12:54 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/08 22:14:31 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_flag_check(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar((char )va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		a;

	i = 0;
	a = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			a += ft_flag_check(args, str[i + 1]);
			i++;
		}
		else
			a += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (a);
}
