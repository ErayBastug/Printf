#include <stdio.h>

int ft_flag_check(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar((char )va_arg (args , int)));
	else if (c == 's')
		return (ft_putstr(va_arg (args , char *)));
	else if (c == 'p')
		return ();
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg (args , int)));
	else if (c == 'u')
		return ();
	else if (c == 'x' || c == 'X')
		return ();
	else
		return (ft_putchar('%'));

}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	int a;
	
	i = 0;
	a = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			a += ft_flag_check(&args, str[i + 1]);
		}
		else
			a += ft_putchar_fd(str[i]);
		i++;
	}
	va_end(args);
	return (a);
}
