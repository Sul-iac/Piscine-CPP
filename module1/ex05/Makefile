CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = HarlTheUltimateKaren
SRCS =	main.cpp \
		Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all