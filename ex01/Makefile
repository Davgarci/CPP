NAME = phonebook

SRCS = main.cpp Contact.cpp PhoneBook.cpp \

		
		

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS)  $(OBJS) -o $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
		./phonebook

.PHONY: all, clean, fclean, re