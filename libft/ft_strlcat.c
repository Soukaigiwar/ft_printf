/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:48:21 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/20 18:59:34 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	src_size = 0;
	while (dst[dst_size] && dst_size < size)
		dst_size++;
	while ((src[src_size]) && ((dst_size + src_size + 1) < size))
	{
		dst[dst_size + src_size] = src[src_size];
		src_size++;
	}
	if (dst_size != size)
		dst[dst_size + src_size] = '\0';
	return (dst_size + ft_strlen(src));
}
