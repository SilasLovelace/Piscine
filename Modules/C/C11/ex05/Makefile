CC = cc
CFLAGS = -Wall -Wextra -Werror
INCS_DIR = includes
SRCS = math.c main.c func.c
OBJS = $(SRCS:.c=.o)

# Output program name
NAME = do-op

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS_DIR)  -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

