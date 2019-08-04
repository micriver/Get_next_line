# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirivera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/19 19:38:06 by mirivera          #+#    #+#              #
#    Updated: 2019/04/02 15:25:05 by mirivera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ= *.o

all:
	@echo 'Compiling the program...'
	@sh ./compile.sh
	@./test_gnl ||:

clean:
	@rm -rf $(OBJ)
	@echo 'Objects removed'

fclean: clean
	@echo 'test_gnl removed'
	@rm -rf test_gnl

re: fclean all

exe:
	@rm -rf a.out*
	@ls
