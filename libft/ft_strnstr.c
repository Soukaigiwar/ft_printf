/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:22:51 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/31 18:20:14 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	sub_len;
	size_t	i;

	i = 0;
	if (str == NULL && substr == NULL)
		return (NULL);
	sub_len = ft_strlen(substr);
	if (!sub_len)
		return ((char *)str);
	while (str[i] && sub_len <= len)
	{
		if (ft_strncmp(&str[i], substr, sub_len) == 0)
			return ((char *)&str[i]);
		i++;
		len--;
	}
	return (NULL);
}
