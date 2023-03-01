NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@echo "\033[38;5;121mCompiling $<...\033[0m"
	@$(CC) $(FLAGS) -c $< -o $@

${NAME}: ${OBJ}
	@echo "\033[38;5;204mTesting.. is this thing on?\033[0m"
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	@echo "\033[38;5;227mTaking megaphone apart..\033[0m"
	@${RM} ${OBJ}

fclean: clean
	@echo "\033[38;5;81mThrowing it away.\033[0m"
	@${RM} ${NAME}

re: fclean all
