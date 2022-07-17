NAME = a.out

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf $(NAME)

fclean: clean

re : clean all
