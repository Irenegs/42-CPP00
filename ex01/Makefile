NAME        := phonebook

SRCS        := Contact.cpp main.cpp

CC          := c++
CFLAGS      := -Wall -Wextra -Werror -std=c++98

RM          := rm -f
MAKEFLAGS   += --no-print-directory


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
