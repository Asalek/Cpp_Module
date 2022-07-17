NAME = attack

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp humanA.cpp weapon.cpp humanB.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf $(NAME)

fclean: clean

re : clean all