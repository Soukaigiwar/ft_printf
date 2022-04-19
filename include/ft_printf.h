/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:50:23 by shenriqu          #+#    #+#             */
/*   Updated: 2022/04/18 21:39:56 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *received_str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_put_string(char *string);
void	ft_putstr_fd(char *s, int fd);
int		ft_print_percent(void);
char	*ft_rev_string(char *string);
char    *ft_itoh(unsigned int number);
char    *ft_uitoa(unsigned int number);
int     ft_num_len(unsigned int num);
int		ft_scan_string(const char received_str, va_list args);
int		ft_print_char(int c);
int		ft_print_pointer(unsigned long long pointer);
int		ft_print_string(char *string);
int		ft_print_number(int number);
int		ft_print_u_number(unsigned int number);
int		ft_print_l_hex(unsigned int number);
int		ft_print_u_hex(unsigned int number);
#endif
