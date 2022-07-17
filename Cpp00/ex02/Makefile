NAME = bankSystem

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = account.cpp test.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf bankSystem

fclean: clean

re : clean all