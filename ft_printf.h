/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erbastug <erbastug@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:14:49 by erbastug          #+#    #+#             */
/*   Updated: 2024/12/15 01:21:43 by erbastug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_flag_check(va_list args, char c);
int		ft_printf(const char *str, ...);
int		ft_puthex(unsigned int num, char format);
int		ft_hex_len(unsigned int num);
int		ft_unsigned(unsigned int num);
int		ft_unsigned_len(unsigned int num);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_strlen(char *s);
int		ft_putchar(int c);
int		ft_putpointer(unsigned long num);
int		ft_pointer(void *p);
int		ft_check(va_list args, const char *str);
int		ft_pointer_len(unsigned long num);
#endif