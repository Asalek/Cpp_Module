NAME = megaphone

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = megaphone.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf megaphone

fclean: clean

re : clean all
