NAME = phonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp phonebook.cpp \

HEADER = phonebook.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33mCompiling..."
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0m"

.cpp.o:
	@echo "\033[0;32mGenerating obj..."
	$(CC) $(CFLAGS) -c $<
	@echo "\033[0m"

clean:
	@echo "\033[0;31mCleaning..."
	rm -f $(OBJ)
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

.PHONY: all re clean fclean
