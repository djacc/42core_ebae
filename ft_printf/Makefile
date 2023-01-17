
NAME = libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -I include -I libft -Wall -Wextra -Werror
AR			= ar rc
SRC			= tester.c ft_printf.c  # libft.h needs to be called aswell

OBJ			= $(SRC:.c=.o)
BONUS_OBJ	= $(BONUS:.c=.o)

$(NAME):	$(OBJ) libft.a
			$(AR) $(NAME) $(OBJ)

all:		$(NAME)


libft.a:
	make -C libft

clean:
			$(RM) $(OBJ) libft.a
			make -C libft fclean

fclean:		clean
			$(RM) $(NAME)

re:			fclean all 

.PHONY:		all clean fclean re libft.a
