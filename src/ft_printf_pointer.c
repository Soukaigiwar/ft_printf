/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:22:20 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/18 22:06:12 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_hex(unsigned long long number)
{
	int		len;
	char	*hex;

	len = 0;
	printf("debug 1:%llu", number);
	if (number == 0)
		len += write(1, "0", 1);
	else
	{
		hex = ft_itoh(number);
		len = ft_print_string(hex);
		free(hex);
	}
	return (len);
}

int	ft_print_pointer(unsigned long long pointer)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_print_hex(pointer);
	return (len);
}
