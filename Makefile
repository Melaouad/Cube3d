NAME = cub3d
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = helpers.c\
		main.c\

INCLUDES = -I libft/\

OBJS = $(SRCS:.c=>o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) -o $(NAME)

clean : 
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

bonus : $(NAME)

%.o : %.c
		$(CC) $(FLAGS) -c $< $(INCLUDES) -o $@
