NAME=	a.out

FLAGS=	-Wall -Wextra -Werror

FILES=	main.cpp Animal.cpp WrongAnimal.cpp

${NAME}:
		g++ ${FLAGS} ${FILES} -o ${NAME}

all:	${NAME}

clean:	
		rm ${NAME}

fclean:
		rm ${NAME}

re:		fclean all	
