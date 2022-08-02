NAME=	a.out

FLAGS=	-std=c++98

FILES=	main.cpp Bureaucrat.cpp Form.cpp

OBJS= 	${FILES:.cpp=.o}

.c.o:	
		g++ ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			g++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm ${NAME}

fclean:
		rm ${OBJS} ${NAME}

re:		fclean all
