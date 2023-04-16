NAME = convert

SRCS = main.cpp  converter.cpp \

		
		

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
		./convert

.PHONY: all, clean, fclean, re