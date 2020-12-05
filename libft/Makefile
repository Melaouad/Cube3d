# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melaouad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 20:38:07 by melaouad          #+#    #+#              #
#    Updated: 2019/11/14 20:46:18 by melaouad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC=	ft_calloc.c	ft_isascii.c	ft_memccpy.c	ft_memcpy.c 	ft_strchr.c \
		ft_strlcpy.c	ft_strnstr.c	ft_toupper.c	ft_atoi.c		ft_isalnum.c \
		ft_isdigit.c	ft_memchr.c		ft_memmove.c	ft_strdup.c \
		ft_strlen.c		ft_strrchr.c	ft_bzero.c		ft_isalpha.c	ft_isprint.c \
		ft_memcmp.c		ft_memset.c		ft_strlcat.c	ft_strncmp.c	ft_tolower.c \
		ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c	ft_itoa.c \
		ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c \

LIB= libft.h
OBJ= $(SRC:.c=.o)
CFLAGS=  -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	@gcc -c $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)

re: fclean all
