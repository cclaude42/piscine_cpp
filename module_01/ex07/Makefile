NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = replace.cpp \

HEADER = replace.hpp

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
	rm -f *.replace
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

test: re
	@echo "=== Original ==="
	cat -e test.txt
	@echo "================\n"
	./replace test.txt a o
	@echo "==== a => o ===="
	cat -e test.txt.replace
	@echo "================\n"
	./replace test.txt a aaa
	@echo "=== a => aaa ==="
	cat -e test.txt.replace
	@echo "================\n"
	./replace test.txt an x
	@echo "==== an => x ==="
	cat -e test.txt.replace
	@echo "================\n"

.PHONY: all re clean fclean
