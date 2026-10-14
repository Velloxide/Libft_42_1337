# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboutay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/12 15:13:40 by saboutay          #+#    #+#              #
#    Updated: 2026/10/14 12:19:36 by saboutay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PROG = app
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
SRCS = ft_isalpha.c\
       ft_isdigit.c\
       ft_isalnum.c\
       ft_isprint.c\
       ft_strlen.c\
       ft_memset.c\
       ft_bzero.c\
       ft_memcpy.c\
       ft_memmove.c
#$(filter-out main.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

app:
	$(CC) $(CFLAGS) main.c $(NAME) -o $(PROG)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
rapp:
	$(RM) $(PROG)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME) $(PROG)
re: fclean all
.PHONY: all clean fclean re app
