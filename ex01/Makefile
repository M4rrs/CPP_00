NAME = PhoneBook
CC = c++
FLAGS = -Wall -Werror -Wextra -I -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = main.cpp Contact.cpp PhoneBook.cpp
INC = Contact.hpp PhoneBook.hpp

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp ${INC}
	@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o $@

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all
