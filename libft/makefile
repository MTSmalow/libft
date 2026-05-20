NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_substr.c ft_strrchr.c ft_strlen.c ft_strdup.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re