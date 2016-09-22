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

SOURCE  = ft_memset.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strcat.c

HEADER = libft.h

OBJS = ft_memset.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strcat.o

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
