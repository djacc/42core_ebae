
NAME = libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -I include -I libft -Wall -Wextra -Werror
AR			= ar rcs
SRC			=./libft/ft*.c ./ft*.c	# problem might be trying to create the *.o file

OBJ			= $(SRC:.c=.o)
BONUS_OBJ	= $(BONUS:.c=.o)

$(NAME):	$(OBJ) libft.a
			$(AR) $(NAME) $(OBJ)

all:		$(NAME)

output: $(SRC)
	$(CC) $(SRC) -o  output

libft.a:
	make -C libft

clean:
			$(RM) $(OBJ) libft.a output
			make -C libft fclean

fclean:		clean
			$(RM) $(NAME)

re:			fclean all 

.PHONY:		all clean fclean re libft.a