COMPILE = c++ -Wall -Wextra -Werror -std=c++98
NAME = violence
SRCS = main.cpp Weapon.hpp Weapon.cpp HumanA.hpp \
		HumanA.cpp HumanB.hpp HumanB.cpp 
OBJS_FOLDER = obj
OBJS = $(SRCS:%.cpp=$(OBJS_FOLDER)/%.o)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME) 

$(OBJS_FOLDER)/%.o: %.cpp
	@mkdir -p $(OBJS_FOLDER)
	$(COMPILE) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJS_FOLDER)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
