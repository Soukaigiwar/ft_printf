/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:46:39 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/17 23:46:39 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_num_len(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 10;
    }
    return (len);
}

char    *ft_uitoa(unsigned int number)
{
    char            *str_num;
    int             len;

    len = ft_num_len(number);
    str_num = (char *)malloc(sizeof(char) * (len + 1));
    if (!str_num)
        return (0);
    str_num[len] = '\0';
    while (number != 0 && len > 0)
    {
        str_num[len - 1] = number % 10 + 48;
        number /= 10;
        len--;
    }
    return (str_num);
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
	char	*u_num;
	
	len = 0;
	if (number == 0)
	{
		len += write(1, "0", 1);
		return(len);
	}
	u_num = ft_uitoa(number);
	len += ft_print_string(u_num);
	free(u_num);
	return (len);
}
