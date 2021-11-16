SRC_NAME = ft_putchar.c\
ft_strlen.c\
ft_strchr.c\
ft_putnbr.c\
ft_puthex.c\
ft_pchar.c\
ft_putstr.c\
ft_putptr.c\
ft_putunsigned.c\
ft_putpercent.c\
ft_printf.c

OBJ_NAME = $(SRC_NAME:.c=.o)
CFLAG = -Wall -Wextra -Werror
NAME = libftprintf.a
${NAME}:
	gcc -c $(CFLAG) $(SRC_NAME)
	ar -rc $(NAME) $(OBJ_NAME)

all: ${NAME}

bonus: ${NAME}

clean:
	rm -rf ${OBJ_NAME}
fclean: clean
	rm -f ${NAME}
re: fclean all
