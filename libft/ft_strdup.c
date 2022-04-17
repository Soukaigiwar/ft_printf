/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:56:35 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 22:56:36 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*p;

	len = (ft_strlen((char *)str) + 1);
	p = (char *)malloc(len * sizeof(*str));
	if (!p)
		return (NULL);
	ft_strlcpy(p, str, len);
	return (p);
}
