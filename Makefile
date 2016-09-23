# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfredric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:35:23 by cfredric          #+#    #+#              #
#    Updated: 2016/09/21 09:35:25 by cfredric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SOURCE  = ft_memset.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strcat.c \
ft_strncat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memcpy.c

HEADER = libft.h

OBJS = ft_memset.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strcat.o \
ft_strncat.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
ft_isprint.o ft_toupper.o ft_tolower.o ft_bzero.o ft_memcpy.o

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

LIBFLAG = -L

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCE)
	ar -rc $(NAME).a $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
