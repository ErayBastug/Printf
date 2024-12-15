/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:08:10 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/14 14:19:15 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long num)
{
	if (num >= 16)
	{
		ft_putpointer(num / 16);
		ft_putpointer(num % 16);
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
			if (ft_putchar(num - 10 + 'a') == -1)
				return (-1);
		}
	}
	return (0);
}

int	ft_pointer(void *p)
{
	unsigned long	num;
	int				a;

	a = 0;
	num = (unsigned long)p;
	if (num == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	a += write(1, "0x", 2);
	if (a == -1)
		return (-1);
	if (ft_putpointer(num) == -1)
		return (-1);
	a += ft_pointer_len(num);
	return (a);
}

int	ft_pointer_len(unsigned long num)
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
