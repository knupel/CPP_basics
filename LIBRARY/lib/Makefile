NAME = lib.a

CC = clang++ -std=c++11 -stdlib=libc++ 

CFLAGS = -Wall -Wextra -Werror -Weverything -Wpragma-once-outside-header

SRC = r_funct.cpp  \
			R_class.cpp

DEPS = lib.hpp

MDEPS = $(DEPS:.hpp=.hpp)

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.hpp: %.hpp

%.o: %.cpp
	@$(CC) -c $? -o $@

$(NAME): $(OBJ) $(MDEPS)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
	@echo "library done"

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "clean done | library done"

re: fclean all

.PHONY = all clean fclean re