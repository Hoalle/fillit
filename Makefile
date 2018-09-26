# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhertzog <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 17:42:58 by jhertzog          #+#    #+#              #
#    Updated: 2018/01/25 11:30:20 by cperrard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

# src / obj files
SRCS = main.c \
	   reader.c \
	   map.c \
	   solver.c \
	   tetrimino.c \

OBJS = $(SRCS:.c=.o)

# headers
HDRS = fillit.h \

# flags
CFLAGS ?= -Wall -Werror -Wextra -Ilibft/
LDFLAGS ?= -L libft/ -lft

%.o: %.c $(HDRS)
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

libft/libft.a:
	$(MAKE) -C libft/

$(NAME): libft/libft.a $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(MAKE) -C libft/ clean
	@rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft/ fclean
	@rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
