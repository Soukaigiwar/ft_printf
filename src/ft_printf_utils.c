/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:25:59 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/17 23:48:21 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

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
	while (*string)
	{
		write(1, *&string, 1);
		string++;
		len++;
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
