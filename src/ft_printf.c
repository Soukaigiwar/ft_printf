/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:00:01 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/18 22:04:53 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *received_str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, received_str);
	while (received_str[i])
	{
		if (received_str[i] == '%')
		{
			len += ft_scan_string(received_str[i + 1], args);
			i++;
		}
		else
			len += ft_print_char(received_str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	ft_scan_string(const char received_str, va_list args)
{
	int	printed_length;

	printed_length = 0;
	if (received_str == 'c')
		printed_length += ft_print_char(va_arg(args, int));
	if (received_str == 's')
		printed_length += ft_print_string(va_arg(args, char *));
	if (received_str == 'p')
		printed_length += ft_print_pointer(va_arg(args, unsigned long long int));
	if (received_str == 'd' || received_str == 'i')
		printed_length += ft_print_number(va_arg(args, int));
	if (received_str == 'u')
		printed_length += ft_print_u_number(va_arg(args, unsigned int));
	if (received_str == 'x')
		printed_length += ft_print_l_hex(va_arg(args, unsigned int));
	if (received_str == 'X')
		printed_length += ft_print_u_hex(va_arg(args, unsigned int));
	if (received_str == '%')
		printed_length += ft_print_percent();
	return (printed_length);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
