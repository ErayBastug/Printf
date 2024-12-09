/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putthink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:19:57 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/08 22:22:33 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		b;
	char	a;

	b = 0;
	if (n == -2147483648)
		b += (write(1, &"-2147483648", 11));
	else if (n < 0)
	{
		b += (write(1, "-", 1));
		n = n * -1;
		b += ft_putnbr(n);
	}
	else if (n > 9)
	{
		b += ft_putnbr(n / 10);
		a = (n % 10) + '0';
		b += (write(1, &a, 1));
	}
	else
	{
		a = n + 48;
		b += (write(1, &a, 1));
	}
	return (b);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (i < ft_strlen(s))
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
