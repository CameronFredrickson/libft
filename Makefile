# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfredric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:35:23 by cfredric          #+#    #+#              #
#    Updated: 2016/09/25 16:46:26 by cfredric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SOURCE  = 	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strdup.c		\
			ft_strcpy.c		\
			ft_strncpy.c	\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\

HEADER = libft.h

OBJS = 	$(SOURCE:.c=.o)

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

LIBFLAG = -L

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCE)
	ar -rc $(NAME).a $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
