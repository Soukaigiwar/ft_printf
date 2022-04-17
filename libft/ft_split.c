/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 07:08:44 by shenriqu          #+#    #+#             */
/*   Updated: 2021/09/04 21:57:08 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 1;
	word_count = 0;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			word_count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**wordlist;
	size_t	words;
	size_t	chars;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_word_count(s, c);
	wordlist = (char **)malloc((words + 1) * sizeof(char *));
	if (!wordlist)
		return (NULL);
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		chars = ft_char_count(s, c);
		wordlist[i] = ft_substr(s, 0, chars);
		s += chars + 1;
		i++;
	}
	wordlist[i] = 0;
	return (wordlist);
}
