NAME = libft.a

CHK = chk/*.c \

CNV = cnv/*.c \

MEM = mem/*.c

STR = str/*.c

SRC = $(CHK) $(CNV) $(MEM) $(STR)
INC = inc
OBJ = *.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "making libft..."
	@$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@echo "cleaning libft repository..."
	@/bin/rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@echo "removing libft library file..."
	@/bin/rm -f $(NAME)

.PHONY: re
re: fclean all
