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
				ft_putchar(num - 10 + 'a');
			if (format == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
	return (ft_hex_len(num));
}

int ft_hex_len(unsigned int num)
{
	int a;

	a = 0;
	while (num != 0)
	{
		num = num / 16;
		a++;
	}
	return (a);
}

int ft_unsigned(unsigned int num)
{
	if (num >= 10)
		ft_unsigned(num / 10);
	ft_putchar((num % 10) + '0');
	return (ft_unsigned_len(num)); 
}

int ft_unsigned_len(unsigned int num)
{
	int a;

	a = 0;
	while (num != 0)
	{
		num = num / 10;
		a++;
	}
	return (a);
}
