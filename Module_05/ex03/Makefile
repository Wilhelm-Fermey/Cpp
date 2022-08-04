NAME= a.out

FLAGS=	-Wall -Wextra -Werror -std=c++98

FILES= 	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS=	${FILES:.cpp=.o}

.o.c:
		g++ ${FLAGS} -o $< -c ${<:.cpp=.o}

${NAME}:${OBJS}
		g++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm ${NAME}

fclean:
		rm ${OBJS} ${NAME}

re:		fclean all
