NAME=	a.out

FLAGS= -Wall -Wextra -Werror -std=c++98

FILES=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

${NAME}:
		g++ ${FLAGS} ${FILES} -o ${NAME}

all:	${NAME}

clean:
		rm ${NAME}

fclean:
		rm ${NAME}

re:		fclean all
