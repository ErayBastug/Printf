/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:12:54 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/14 16:18:13 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_check(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
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
	else
		return (-1);
}

int	ft_check(va_list args, const char *str)
{
	int	leng;
	int	total_leng;
	int	i;

	i = -1;
	total_leng = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (-1);
			leng = ft_flag_check(args, str[++i]);
			if (leng == -1)
				return (-1);
			total_leng += leng;
		}
		else
		{
			if (ft_putchar(str[i]) == -1)
				return (-1);
			total_leng++;
		}
	}
	return (total_leng);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	i = ft_check(args, str);
	if (i == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (i);
}
