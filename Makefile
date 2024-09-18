NAME = test

MY_SOURCES = ft_strlcat.c \
			ft_strlen.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

$(NAME): $(MY_SOURCES:.c=.o)
	cc -o $(NAME) $(MY_OBJECTS)

my_rule: sub_rule
	echo I will compile my files $(MY_SOURCES)

sub_rule:
	echo This is my rule, in $(CUR_DIR)

clean:
	rm -rf *.o

run:
	./$(NAME)
