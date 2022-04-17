/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:33:21 by shenriqu          #+#    #+#             */
/*   Updated: 2021/09/04 22:09:07 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define	LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/**
 * @brief Convert a numeric character to integer.
 * 
 * @param nptr Pointer to char memory on stack
 * @return int 
 */
int		ft_atoi(const char *nptr);
/**
 * @brief Check if a character is an alphabet.
 * 
 * @param c Integer representation of a char in ascii table to be converted.
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief Check if a character is a digit.
 * 
 * @param c Integer representation of a char in ascii table to be verified.
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief Check if a character is a digit or an alphabet.
 * 
 * @param c Integer representation of a char in ascii table to be verified.
 * @return int 
 */
int		ft_isalnum(int c);
/**
 * @brief Check if a character is one of 127 possibles ascii chars
 * 
 * @param c Integer representation of a char in ascii table to be verified.
 * @return int 
 */
int		ft_isascii(int c);
/**
 * @brief Check if a character is printable.
 * 
 * @param c Integer representation of a char in ascii table to be verified.
 * @return int 
 */
int		ft_isprint(int c);
/**
 * @brief Return the lenght of string.
 * 
 * @param c Pointer to initial position of a string.
 * @return size_t 
 */
size_t	ft_strlen(const char *c);
/**
 * @brief Convert a character to upper.
 * 
 * @param c Integer representation of a char in ascii table to be converted.
 * @return int 
 */
int		ft_toupper(int c);
/**
 * @brief Convert a character to lower.
 * 
 * @param c Integer representation of a char in ascii table to be converted.
 * @return int 
 */
int		ft_tolower(int c);
/**
 * @brief Fill a space of memory pointed to \0 until reach given size_t.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief Fill a space of memory pointed to specific char until reach 
 * given size_t. Whatever the type.
 * 
 * @param b Pointer to inicial space of memory which will be replaced with
 * @param c Integer representation of a char in ascii that will used to replace.
 * @param len How much bytes will be replaced.
 * @return void* 
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief 
 * 
 * @param str1 
 * @param str2 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void	*str, int	c, size_t	n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *str1);
void	*ft_calloc(size_t count, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);

#endif
