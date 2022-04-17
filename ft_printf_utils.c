/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:25:59 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/17 04:14:15 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *string)
{
	int	len;

	len = 0;
	if (string == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (*string++)
	{
		write(1, *&string, 1);
		//*string++;
		len++;
	}
	return (len);
}

int	ft_print_number(int number)
{
	int		len;
	char	*str_num;

	len = 0;
	str_num = ft_itoa(number);
	len = ft_print_string(str_num);
	free(str_num);
	return (len);
}

int	ft_print_u_number(unsigned int number)
{
	int		len;
	char	*str_num;

	len = 0;
	if (number == 0)
		len += write(1, "0", 1);
	else
	{
		str_num = ft_itoa(number);
		len += ft_print_string(str_num);
		free(str_num);
	}
	return (len);
}

char	*ft_rev_string(char *string)
{
	int		len;
	size_t	i;
	char	temp;

	len = ft_strlen(string);
	i = -1;
	while (++i < ft_strlen(string) / 2)
	{
		temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
	return (string);
}
