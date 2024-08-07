NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRC = ft_printf.c ft_checkformat.c ft_ptnbr.c ft_putchar.c ft_puthexadecimal_lowercase.c ft_puthexadecimal_uppercase.c ft_putnbrlong.c ft_putstr.c ft_puthexadecimal_long.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $?

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
