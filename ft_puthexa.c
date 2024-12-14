/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:18:42 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/14 16:49:01 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	if (num >= 16)
	{
		ft_puthex(num / 16, format);
		ft_puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				if (ft_putchar(num - 10 + 'a') == -1)
					return (-1);
			if (format == 'X')
				if (ft_putchar(num - 10 + 'A') == -1)
					return (-1);
		}
	}
	return (ft_hex_len(num));
}

int	ft_hex_len(unsigned int num)
{
	int	a;

	a = 0;
	while (num != 0)
	{
		num = num / 16;
		a++;
	}
	return (a);
}

int	ft_unsigned(unsigned int num)
{
	if (num >= 10)
		ft_unsigned(num / 10);
	if (ft_putchar((num % 10) + '0') == -1)
		return (-1);
	return (ft_unsigned_len(num));
}

int	ft_unsigned_len(unsigned int num)
{
	int	a;

	a = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		a++;
	}
	return (a);
}
