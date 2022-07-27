# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 12:15:38 by wilhelmfermey     #+#    #+#              #
#    Updated: 2022/07/18 13:34:09 by wilhelmfermey    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	Zombie	

FLAGS=	-Wall -Wextra -Werror

FILES=	main.cpp Zombie.class.cpp randomChump.cpp newZombie.cpp

${NAME}:
		g++ ${FLAGS} ${FILES} -o ${NAME}

all:	${NAME}

clean:	
		rm ${NAME}

fclean:
		rm ${NAME}

re:		fclean all
