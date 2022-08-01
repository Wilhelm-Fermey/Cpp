NAME=	a.out

FLAGS=	-Wall -Wextra -Werror -std=c++98

FILES=	main.cpp Animal.cpp Brain.cpp WrongAnimal.cpp

OBJS=	${FILES:.cpp=.o}

.c.o:
		g++ ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
		g++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:	
		rm ${NAME}

fclean:
		rm ${OBJS} ${NAME}

re:		fclean all	
