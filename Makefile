SRCS = ft_printf.c ft_puthexa.c ft_putthink.c ft_pointer.c
OBJ = ${SRCS:.c=.o}
NAME = libftprintf.a

${NAME}: ${OBJ}
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
