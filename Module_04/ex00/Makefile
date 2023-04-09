NAME = animal

SRCS = main.cpp animal.cpp cat.cpp dog.cpp WrongAnimal.cpp WrongCat.cpp \

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
		./animal

.PHONY: all, clean, fclean, re