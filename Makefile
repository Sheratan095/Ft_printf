CC			= cc

NAME			= libftprintf.a

SRCS			= ft_printf.c ft_is_in.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putbase.c ft_putptr.c ft_unsignedputnbr.c

OBJS			= $(SRCS:%.c=%.o)

FLAGS			= -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f *.a
	rm -f *.out
	rm -f *.gch

re: fclean all

test: $(NAME)
	cc  main.c  && ./a.out
