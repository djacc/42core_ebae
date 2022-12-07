.PHONY: all run clean fclean

CC = gcc
MASTER = hello.c
LINKERFLAG = -Wall -Werror -Wextra
NAME = output

RED =\033[1;31m # BOLD Light Red
GREEN =\033[1;32m # BOLD Light Green
NC =\033[0m # No Color

all: run

run: hello.c
	@echo "> initializing..."
	@echo ">"
	@echo "> flags		${GREEN}${LINKERFLAG}${NC}"
	@echo "> output	 ${GREEN}${NAME}${NC}"
	@echo "> run		  ${CC} ${MASTER} ${LINKERFLAG} -o ${NAME}"
	@echo "> ..."
	@${CC} hello.c ${LINKERFLAG} -o ${NAME}
	@echo "> compile	 ${GREEN}SUCCESS${NC}"

clean:
	@echo "> cleaning	 ${RED}temp files${NC}"
	@rm -f *.o

fclean:
	@echo "> cleaning	 ${RED}${NAME}${NC}"
	@rm ${NAME}

make my_library

#re: rebuilding the process from the beginning