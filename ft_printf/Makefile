NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar -rcs
RM		= rm -rf
SRC_DIR	= src/

SRCS	= $(addprefix $(SRC_DIR), \
	ft_printf.c \
	ft_print_percent.c \
	ft_c_conversion.c \
	ft_d_conversion.c \
	ft_p_conversion.c \
	ft_s_conversion.c \
	ft_u_conversion.c \
	ft_x_conversion.c)

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) libft.a
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

libft.a:
	make -C libft

clean:
	$(RM) $(OBJS) libft.a
	make -C libft fclean

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft.a

