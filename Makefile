NAME = libft.a

CHK = srcs/chk/*.c

CNV = srcs/cnv/*.c

MEM = srcs/mem/*.c

STR = srcs/str/*.c

PUT = srcs/put/*.c

GET = srcs/get/*.c

LST = srcs/lst/*.c

SRC = $(CHK) $(CNV) $(MEM) $(STR) $(PUT) $(GET) $(LST)
INC = includes/
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
	@rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@echo -e "\033[31mremoving libft library file...\033[0m"
	@rm -f $(NAME)

.PHONY: re
re: fclean all
