# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 20:04:32 by hladeiro          #+#    #+#              #
#    Updated: 2025/05/25 19:28:19 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = AMateria.cpp Character.cpp MateriaSource.cpp main.cpp Ice.cpp Cure.cpp
OBJ = $(SRC:.cpp=.o)
TOTAL_FILES := $(words $(SRC))

GREEN = \033[0;32m
RED = \033[0;31m
CYAN = \033[0;36m
BLUE = \033[0;34m
YELLOW = \033[0;33m
NOCOLOR = \033[0m

BAR_SYMBOL := ▓
BAR_LENGTH := 50
PROGRESS := 0

%.o: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@
	@$(eval PROGRESS := $(shell echo $$(($(PROGRESS) + 1))))
	@$(eval PERCENT := $(shell echo $$(($(PROGRESS) * 100 / $(TOTAL_FILES)))))
	@$(eval BAR := $(shell echo $$(($(PROGRESS) * $(BAR_LENGTH) / $(TOTAL_FILES)))))
	@$(eval REST := $(shell echo $$(($(BAR_LENGTH) - $(BAR)))))
	@printf "\r\033[K$(CYAN)["
	@for i in `seq 1 $(BAR)`; do \
		printf "$(BAR_SYMBOL)"; \
	done
	@for i in `seq 1 $(REST)`; do \
		printf " "; \
	done
	@printf "] $(PERCENT)%% $(RED)Compiling:$(NOCOLOR) $<"
	@sleep 0.1

all : $(NAME)

$(NAME): $(OBJ)
	@echo ""
	@echo "$(YELLOW)Creating $(NAME)..."
	@$(CXX) $(OBJ) -o $(NAME) $(FLAGS)
	@sleep 0.2
	@echo -n "\r\033[K" # Erase the loading bar
	@echo "$(GREEN)$(NAME) created successfully.$(NOCOLOR)"

clean:
	@rm -f $(OBJ)
	@echo "$(BLUE)Object files removed.$(NOCOLOR)"
	@echo "$(GREEN)Clean done.$(NOCOLOR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(BLUE)Project removed.$(NOCOLOR)"
	@echo "$(GREEN)Full clean done.$(NOCOLOR)"

re: fclean all
