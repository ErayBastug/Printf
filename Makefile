NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_puthexa.c ft_putthink.c ft_pointer.c

OBJ = ${SRCS:.c=.o}

all: $(NAME)

${NAME}: ${OBJ}
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
