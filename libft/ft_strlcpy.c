/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:47:43 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/16 16:17:42 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	if (!src && !src && !len)
		return (0);
	src_len = ft_strlen((char *)src);
	if (len)
	{
		while (--len && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (src_len);
}
