NAME=	a.out

FLAGS=	-Wall -Werror -Wextra -std=c++98

FILES= 	main.cpp Bureaucrat.cpp

OBJS=	${FILES:.cpp=.o}

.c.o:
			g++ ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			g++ ${FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:		
			rm ${NAME}

fclean:		
			rm ${OBJS} ${NAME}

re:			fclean all


