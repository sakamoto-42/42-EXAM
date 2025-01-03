/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:09:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/03 16:36:54 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_putchar_count(const int c, int *count_ptr)
{
	*count_ptr += write(1, &c, 1);
}

void	ft_putstr_count(const char *str, int *count_ptr)
{
	if (!str)
	{
		ft_putstr_count("(null)", count_ptr);
		return ;
	}
	while (*str)
	{
		ft_putchar_count((const int)*str, count_ptr);
		str++;
	}
}

void	ft_putdec_count(int n, int *count_ptr)
{
	if (n == -2147483648)
	{
		ft_putstr_count("-2147483648", count_ptr);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_count((const int)('-'), count_ptr);
		n = -n;
	}
	if (n >= 10)
		ft_putdec_count(n / 10, count_ptr);
	ft_putchar_count(n % 10 + 48, count_ptr);
}

void	ft_puthex_count(const unsigned long n, int *count_ptr, const char *base)
{
	char	c;

	if (n >= 16)
		ft_puthex_count(n / 16, count_ptr, base);
	c = base[n % 16];
	ft_putchar_count((const int)c, count_ptr);
}

void	ft_format_arg(const char format, int *count_ptr, va_list args)
{
	if (format == 's')
		ft_putstr_count(va_arg(args, const char *), count_ptr);
	else if (format == 'd')
		ft_putdec_count(va_arg(args, int), count_ptr);
	else if (format == 'x')
		ft_puthex_count(va_arg(args, const unsigned int), count_ptr, "0123456789abcdef");
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format_arg(*str, &count, args);
		}
		else
			ft_putchar_count((const int)*str, &count);
		str++;
	}
	va_end(args);
	return (count);
}
