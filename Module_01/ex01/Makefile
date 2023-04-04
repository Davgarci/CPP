NAME = zombie

SRCS = main.cpp zombie.cpp zombieHorde.cpp \

		
		

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra 

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS)  $(OBJS) -o $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
		./zombie

.PHONY: all, clean, fclean, re