NAME = megaphone

SRCS = ./megaphone.cpp \

CC = g++ -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJS = ${SRCS:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${OBJS} -o ${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all