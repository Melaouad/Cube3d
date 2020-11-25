NAME  = cub3d

SRC_PATH= src
SRC_NAME=	main.c helpers.c libft.c
HDR_PATH= headers
HDR_NAME= cub3d.h libft.h

OBJ_PATH= objs
OBJ_NAME= $(SRC_NAME:.c=.o)

OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
SRC= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
HDR= $(addprefix $(HDR_PATH)/,$(HDR_NAME))


# *****     flags     ***** #

COM= gcc
CFLAGE= -Wall #-Wextra -Werror
HDR_INC= -I ./headers/

#MLX= -lmlx -framework OpenGL -framework AppKit #-lX11
## MLX_INC= /usr/local/include
#MLX_LIB1= /usr/local/lib
#MLX_LIB2= /usr/X11/lib


# *****     rules     ***** #

all: $(NAME)

$(NAME): $(OBJ)
		@$(COM) $(CFLAGE)  $(OBJ)  -o $@

#  @echo " _____       _           _____     _  "
# @echo " /  __ \     | |         |____ |   | | "
# @echo " | /  \/_   _| |__   ___     / / __| | " 
# @echo " | |   | | | | '_ \ / _ \    \ \/ _` | "
# @echo " | \__/\ |_| | |_) |  __/.___/ / (_| | "
# @echo "  \____/\__,_|_.__/ \___|\____/ \__,_| "
                                     

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HDR)
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(COM) $(CFLAGE) $(HDR_INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "miniRT : Removing Objs"

fclean: clean
	@rm -rf a.out
	@echo "miniRT : Removing miniRT"

re: fclean all