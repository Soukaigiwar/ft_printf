/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:21:47 by shenriqu          #+#    #+#             */
/*   Updated: 2021/09/04 22:28:56 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		str = (char *)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = 0;
		while (s2[i])
		{
			str[len1] = s2[i];
			i++;
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
