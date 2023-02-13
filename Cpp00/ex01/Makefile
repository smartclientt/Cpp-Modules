NAME		=	PhoneBook
SRCS		=	main.cpp PhoneBook.cpp Contact.cpp
OBJS		=	$(SRCS:.cpp=.o)
HEADR		=	PhoneBook.hpp Contact.hpp
CPP			=	c++
CFLAG		=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HEADR)
				$(CPP) $(CFLAG) $(SRCS) -o $(NAME)
%.o			:	%.cpp
				$(CPP) $(CFLAGS) -c $< -o $@
clean		:	$(OBJS)
				$(RM) $(OBJS)			
fclean		:	clean
				$(RM) $(NAME)
re			:	fclean all