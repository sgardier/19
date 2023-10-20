
CC=gcc
CFLAGS=-Wextra -Werror -Wall
LD=gcc
LDFLAGS=-Wextra -Werror -Wall

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o, $(SRC))

NAME=libft.a

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
