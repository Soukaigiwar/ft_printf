/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:08:51 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/31 20:08:53 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	strlen;

	if (!s || !*s)
		return ;
	strlen = ft_strlen(s);
	i = 0;
	while (i < strlen)
	{
		f(i, &s[i]);
		i++;
	}
}
