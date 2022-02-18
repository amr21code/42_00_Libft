# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amr21code <a@n.de>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 09:37:00 by amr21code         #+#    #+#              #
#    Updated: 2022/01/14 11:07:40 by amr21code        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_C = *.c
SRC_O = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC_C) -Werror -Wall -Wextra
	ar rcs $(NAME) $(SRC_O)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
