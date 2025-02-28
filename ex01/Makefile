CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

NAME = AwesomePhoneBook
SRCS =	MyAwesomePhonebook.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all