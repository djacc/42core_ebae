SRC = *.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: libft.a

libft.a: *.c
	cc -Werror -Wextra -Wall -c *.c
	ar -rc libft.a $(OBJ)

clean:
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all 