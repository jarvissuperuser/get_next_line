# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 09:47:55 by tmugadza          #+#    #+#              #
#    Updated: 2016/05/10 10:23:46 by tmugadza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

FL =	-Wall -c

TG =	libft.a

A =		ar rc

src = ft_atoi.c \
ft_bzero.c \
ft_isascii.c \
ft_isdigit.c \
ft_memccpy.c \
ft_memchar.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memset.c \
ft_putchar.c \
ft_putstr.c \
ft_strcat.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strstr.c \
ft_strsub.c \
ft_strjoin.c \
ft_strdup.c \
ft_strnew.c \

OB = ft_atoi.o \
ft_bzero.o \
ft_isascii.o \
ft_isdigit.o \
ft_memccpy.o \
ft_memchar.o \
ft_memcmp.o \
ft_memcpy.o \
ft_memset.o \
ft_putchar.o \
ft_putstr.o \
ft_strcat.o \
ft_strchr.o \
ft_strcmp.o \
ft_strcpy.o \
ft_strlcat.o \
ft_strlen.o \
ft_strncat.o \
ft_strncmp.o \
ft_strstr.o \
ft_strsub.o \
ft_strjoin.o \
ft_strdup.o \
ft_strnew.o \

all : $(TG)
	#done
$(TG) : $(OB)
	$(A) $(TG) $(OB)
	ranlib $(TG)
$(OB) :
	$(C) $(FL)  $(src)
	#building
fclean :
	rm -rf $(TG) $(OB)
