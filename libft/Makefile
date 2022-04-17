# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/09 20:33:28 by shenriqu          #+#    #+#              #
#    Updated: 2022/04/14 22:17:22 by shenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
CC = gcc
FILES = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c\
		ft_strjoin.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_striteri.c \
		ft_split.c

OBJFILES = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $@ $^
	
$(OBJFILES): $(FILES)
	$(CC) $(CFLAGS) $^

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
