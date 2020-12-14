NAME  = cub3d

SRC_PATH= src
SRC_NAME=	main.c helpers.c tables.c ft_readfiles.c ../get_next_line/get_next_line.c ../libft/ft_memset.c \
	   ../libft/ft_bzero.c \
	  ../libft/ft_memcpy.c \
	   ../libft/ft_memccpy.c \
	   ../libft/ft_memmove.c \
	   ../libft/ft_memchr.c \
	   ../libft/ft_memcmp.c \
	   ../libft/ft_strlen.c \
	   ../libft/ft_isalpha.c \
	   ../libft/ft_isdigit.c \
	   ../libft/ft_isalnum.c \
	   ../libft/ft_isascii.c \
	   ../libft/ft_isprint.c \
	   ../libft/ft_toupper.c \
	   ../libft/ft_tolower.c \
	   ../libft/ft_strchr.c \
	   ../libft/ft_strrchr.c \
	   ../libft/ft_strncmp.c \
	   ../libft/ft_strlcpy.c \
	   ../libft/ft_strlcat.c \
	   ../libft/ft_strnstr.c \
	   ../libft/ft_atoi.c \
	   ../libft/ft_strdup.c \
	   ../libft/ft_calloc.c \
	   ../libft/ft_substr.c \
	   ../libft/ft_strjoin.c \
	   ../libft/ft_strtrim.c \
	   ../libft/ft_split.c \
	   ../libft/ft_itoa.c \
	   ../libft/ft_strmapi.c \
	   ../libft/ft_putchar_fd.c \
	   ../libft/ft_putstr_fd.c \
	   ../libft/ft_putendl_fd.c \
	   ../libft/ft_putnbr_fd.c \

HDR_PATH= headers
HDR_NAME= cub3d.h libft.h get_next_line.h

OBJ_PATH= objs
OBJ_NAME= $(SRC_NAME:.c=.o)

OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
SRC= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
HDR= $(addprefix $(HDR_PATH)/,$(HDR_NAME))


# *****     flags     ***** #

COM= gcc
CFLAGE= -Wall -Wextra -Werror
HDR_INC= -I ./headers/

#MLX= -lmlx -framework OpenGL -framework AppKit #-lX11
## MLX_INC= /usr/local/include
#MLX_LIB1= /usr/local/lib
#MLX_LIB2= /usr/X11/lib


# *****     rules     ***** #

all: $(NAME)

$(NAME): $(OBJ)
		@$(COM) $(CFLAGE)  $(OBJ)  -o $@
	
                                    
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HDR)
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(COM) $(CFLAGE) $(HDR_INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "Cube3D : Removing Objs"

fclean: clean
	@rm -rf a.out
	@echo "Cube3D : Removing Cube3D"

re: fclean all