NAME=	Base

FLAGS=	-Wall -Wextra -Werror -std=c++98

FILES=	main.cpp Base.cpp

OBJS=		${FILES:.cpp=.o}

.c.o:	
			c++	${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			c++ ${FLAGS} ${FILES} -o ${NAME}

all:		${NAME}

clean:
			rm ${NAME}

fclean:
			rm ${OBJS} ${NAME}

re:			fclean all
