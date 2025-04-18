/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:44:12 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/17 22:33:38 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	if (num >= 16)
	{
		if (ft_puthex(num / 16, format) == -1
			|| ft_puthex(num % 16, format) == -1)
			return (-1);
	}
	else
	{
		if (num <= 9)
		{
			if (ft_putchar(num + '0') == -1)
				return (-1);
		}
		else
		{
			if (format == 'x' && (ft_putchar(num - 10 + 'a') == -1))
				return (-1);
			if (format == 'X' && (ft_putchar(num - 10 + 'A') == -1))
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
