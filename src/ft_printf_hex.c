/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:36:07 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/18 20:35:16 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_itoh(unsigned int number)
{
	char	*hex;
	unsigned int		remainder;
	int		i;
	remainder = 1;
	i = 0;
	hex = (char *)malloc(sizeof(char) * (10 + 1));
	while (number != 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			remainder += 48;
		else
			remainder += 87;
		hex[i++] = remainder;
		number /= 16;
	}
	hex[i] = '\0';
	hex = ft_rev_string(hex);
	return (hex);
}

int	ft_print_l_hex(unsigned int number)
{
	int		len;
	char	*hex;

	len = 0;
	if (number == 0)
		len += write(1, "0", 1);
	else
	{
		hex = ft_itoh(number);
		//write(1, "M", 1);
		len = ft_print_string(hex);
		free(hex);
	}
	return (len);
}

int	ft_print_u_hex(unsigned int number)
{
	int		len;
	char	*hex;
	int		i;

	len = 0;
	i = 0;
	if (number == 0)
		len += write(1, "0", 1);
	else
	{
		hex = ft_itoh((unsigned int)number);
		while (hex[i] != '\0')
		{
			if (ft_isalpha(hex[i]))
				hex[i] = hex[i] - 32;
			i++;
		}
		len = ft_print_string(hex);
		free(hex);
	}
	return (len);
}
