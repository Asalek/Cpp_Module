NAME = harl

CPFLAGS = c++  -std=c++98

CFILES = main.cpp harl.cpp

all : $(NAME)

$(NAME) : $(CFILES)
	$(CPFLAGS) $^ -o $@

clean :
	rm -rf $(NAME)

fclean: clean

re : clean all