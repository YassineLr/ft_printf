SRC = ft_putnbr.c ft_putchar.c ft_putunbr.c ft_putstr.c \
		ft_printf_hexa_lowercase.c ft_printf_hexa_uppercase.c \
		ft_printf.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rc

CC = cc

%.o:%.c
	${CC} ${CFLAGS} -c $<

all = ${NAME}

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all