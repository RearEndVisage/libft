NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

INCLUDES=-I.

SRC=ft_*.c

OBJ=$(SRC:.c=.o)

$(NAME):  $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC) $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
