# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 21:59:00 by shenriqu          #+#    #+#              #
#    Updated: 2022/04/17 04:45:35 by shenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
AR = ar rcs
FILES = ft_printf.c ft_printf_utils.c main.c
LIBFT_DIR = ./libft
LIBFT = libft.a

printf:
	$(CC) -c ./libft/*.c
	$(CC) $(CFLAGS) $(FILES) ./libft/libft.a
#	clear && gcc *.c -L./libft/libft.a

vai:
	clear && gcc -Werror *.c ./libft/libft.a -o a.out && ./a.out

norm:
	norminette *.c
# OBJFILES = $(FILES:%.c=%.o)

# all: $(NAME)

# $(NAME): $(OBJFILES)
# 	ar rcs $@ $^
	
# $(OBJFILES): $(FILES)
# 	$(CC) $(CFLAGS) $^

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES)
# 	gcc -nostartfiles -shared -o libftprintf.so $(OBJFILES)

clean:
	rm -f *.o a.out

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# norm:
# 	clear && norminette $(FILES)

# .PHONY: clean fclean all re