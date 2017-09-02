# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbernar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 20:12:50 by thbernar          #+#    #+#              #
#    Updated: 2017/08/21 18:05:29 by thbernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean: 
	rm -rf *.o

fclean: clean
	 rm -rf libft.a

re: fclean all 
