NAME = megaphone

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

OBJ_DIR = obj

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS) 

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all fclean clean re
