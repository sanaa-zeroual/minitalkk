# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 10:30:55 by szeroual          #+#    #+#              #
#    Updated: 2024/07/28 21:02:39 by szeroual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = server client
SRC_SERVER = server.c
SRC_CLIENT = client.c
LIBFT_DIR = Libft
PRINTF_DIR = Ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

server: $(SRC_SERVER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) $(PRINTF) -o server

client: $(SRC_CLIENT) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) $(PRINTF) -o client

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f server client
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re




