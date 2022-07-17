NAME = phonebook

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = phonebook.cpp utils.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf phonebook

fclean: clean

re : clean all