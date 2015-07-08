# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/30 05:29:40 by abarbaro          #+#    #+#              #
#    Updated: 2015/07/08 01:33:35 by abarbaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = fdf
FW = -framework OpenGL -framework AppKit
LIBFTDIR = includes/libft/
LIBXDIR = includes/minilibx_macos/
LIBFT = $(LIBFTDIR)libft.a
LIBX = $(LIBXDIR)libmlx.a
SRCDIR = ./src/
SRCFIL = $(shell ls $(SRCDIR) | grep "\.c")
SRC = $(addprefix $(SRCDIR),$(SRCFIL))
ODIR = ./OBJECTS/
SRCO = $(SRCFIL:.c=.o)
GRN = tput setaf 4
GRN = tput setaf 2
WHT = tput setaf 7
NOCOLOR = tput sgr 0

all: $(LIB) $(NAME)

$(NAME): $(addprefix $(ODIR),$(SRCO))
	@$(GRN)
	@echo "Making $(NAME)..."
	@$(CC) $(addprefix $(ODIR),$(SRCO)) -o $(NAME) \
	-L$(LIBFTDIR) -lft -L$(LIBXDIR) -lmlx $(FW)
	@$(WHT)
	@echo "$(NAME) done."
	@$(NOCOLOR)

$(addprefix $(ODIR),$(SRCO)): $(LIBFT) $(LIBX) $(SRC)
	@$(GRN)
	@echo "Making objects..."
	@$(CC) $(CFLAGS) -c $(SRC) -I ./includes -I $(LIBFTDIR)includes
	@mkdir -p $(ODIR)
	@mv $(SRCO) $(ODIR)
	@$(WHT)
	@echo "objects done."
	@$(NOCOLOR)

$(LIBFT):
	@$(GRN)
	@echo "Building dependencies..."
	@make -C $(LIBFTDIR)
	@$(WHT)
	@echo "Dependency done."
	@$(NOCOLOR)

$(LIBX):
	@$(GRN)
	@echo "Building dependencies..."
	@make -C $(LIBXDIR) > /dev/null
	@$(WHT)
	@echo "Dependency done."
	@$(NOCOLOR)

re: fclean all
	@$(GRN)
	@echo "Project reset and rebuilt."
	@$(NOCOLOR)

clean:
	@make -C $(LIBFTDIR) fclean
	@make -C $(LIBXDIR) clean
	@$(GRN)
	@echo "Cleaning objects..."
	rm -rf $(ODIR)
	@$(WHT)
	@echo "$(NAME) - Cleaning done."
	@$(NOCOLOR)

fclean: clean
	@$(GRN)
	@echo "Deleting output..."
	rm -f $(NAME)
	@$(WHT)
	@echo "$(NAME) - Deletion done."
	@$(NOCOLOR)

