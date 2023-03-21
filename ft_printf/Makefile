
NAME = libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -I include -I libft -Wall -Wextra -Werror
AR			= ar rcs
SRC			= ft_printf.c ft_print_percent.c ft_c_conversion.c \
ft_d_conversion.c ft_p_conversion.c ft_s_conversion.c ft_u_conversion.c ft_x_conversion.c

# ./libft/ft*.c

OBJ			= $(SRC:.c=.o)

$(NAME):	$(OBJ) libft.a
			$(AR) $(NAME) $(OBJ)

all:		$(NAME)

# output: $(SRC)
#	$(CC) $(SRC) -o  output

libft.a:
	make -C libft

clean:
			$(RM) $(OBJ) libft.a output
			make -C libft fclean

fclean:		clean
			$(RM) $(NAME) # output

re:			fclean all 

.PHONY:		all clean fclean re libft.a
