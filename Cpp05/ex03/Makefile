NAME = Bureaucrat

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

all :
	$(CPFLAGS) $(wildcard *.cpp) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean: clean
	rm -rf *_shrubbery

re : clean all