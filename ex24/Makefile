NAME = libft.a

INCLUDES = -I includes

SRC = srcs/ft_putchar.c\
	srcs/ft_putstr.c\
	srcs/ft_swap.c\
	srcs/ft_strcmp.c\
	srcs/ft_strlen.c\

OBJ = $(SRC:.c=.o);

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f srcs/*.o

fclean: clean
	rm -f *.a

re: fclean all

.PHONY: all clean fclean re
