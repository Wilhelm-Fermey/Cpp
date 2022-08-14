# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 12:15:38 by wilhelmfermey     #+#    #+#              #
#    Updated: 2022/08/14 12:49:15 by wfermey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	Zombie	

FLAGS=	-Wall -Wextra -Werror -std=c++98

FILES=	main.cpp Zombie.class.cpp randomChump.cpp newZombie.cpp

${NAME}:
		g++ ${FLAGS} ${FILES} -o ${NAME}

all:	${NAME}

clean:	
		rm ${NAME}

fclean:
		rm ${NAME}

re:		fclean all
