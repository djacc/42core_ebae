
NAME = libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -I include -I libft -Wall -Wextra -Werror
AR			= ar rc
SRC			= *.c  # libft.h needs to be called aswell

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

#1. Add the library libft.h to the SRC variable. It should now look like this: SRC = libft.h *.c
#2. Add an include flag to the CFLAGS variable. It should now look like this: CFLAGS = -I libft.h -Wall -Wextra -Werror
#3. Add a dependency for the libft.h library in the $(NAME) target. It should now look like this: $(NAME): $(OBJ) libft.h
#4. Add the library libft.h to the clean and fclean targets, so that it is also removed when those targets are run. It should now look like this: $(RM) $(OBJ) $(BONUS_OBJ) libft.h
#5. Finally, make sure that libft.h is present in the same directory as the Makefile and the other source files.
