NAME = libft.a

CHK = chk/*.c \

CNV = cnv/*.c \

MEM = mem/*.c

STR = str/*.c

PUT = put/*.c

GET = get/*.c

SRC = $(CHK) $(CNV) $(MEM) $(STR) $(PUT) $(GET)
INC = inc
OBJ = *.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo -e "\033[92mmaking libft...\033[0m"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@echo -e "\033[33mcleaning libft repository...\033[0m"
	@/bin/rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@echo -e "\033[31mremoving libft library file...\033[0m"
	@/bin/rm -f $(NAME)

.PHONY: re
re: fclean all
