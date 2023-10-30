# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 15:25:18 by linhnguy          #+#    #+#              #
#    Updated: 2023/10/30 17:59:52 by linhnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_isalpha.c ft_isalnum.c ft_isdigit.c		\
		ft_isascii.c ft_isprint.c ft_strlen.c		\
		ft_toupper.c ft_tolower.c ft_strchr.c		\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

main: all
	@$(CC) $(CFLAGS) main.c $(NAME)
	@./a.out
	@$(RM) a.out

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re main