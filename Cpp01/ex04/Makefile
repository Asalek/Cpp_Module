NAME = replace

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf $(NAME)

fclean: clean
	rm -rf *.replace

re : clean all