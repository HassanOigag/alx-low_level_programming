CC = cc

CFLAGS = -Wall -Wextra -Werror 

NAME = linear

SRCS = 0-linear.c main.c 1-binary.c

HEADERS = search_algos.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re
