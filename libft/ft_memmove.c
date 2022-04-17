/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:56:28 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 22:56:29 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pd;

	pd = (unsigned char *)dst;
	if (dst > src)
	{
		while (len--)
			*(pd + len) = *(unsigned char *)(src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
