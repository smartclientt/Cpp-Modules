NAME		=	Fixed_02
SRCS		=	main.cpp Fixed.cpp
OBJS		=	$(SRCS:.cpp=.o)
HEADR		=	Fixed.hpp
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

all			:	$(NAME)
$(NAME)		:	$(OBJS) $(HEADR)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
%.o			:	%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@
clean		:
				$(RM) $(OBJS)
fclean		:	clean
				$(RM) $(NAME)
re			:	fclean all