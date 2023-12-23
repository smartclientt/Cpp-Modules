NAME		=	PmergeMe
SRCS		=	main.cpp PmergeMe.cpp
HEADRS		=	PmergeMe.hpp

OBJS		=	$(SRCS:%.cpp=%.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf
# RM			=	del /q

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o 		:	%.cpp  $(HEADRS)
				$(CXX) $(CXXFLAGS) -o $@ -c $<

clean		:
				$(RM) $(OBJS)
fclean		:	clean
				$(RM) $(NAME)
re			:	fclean all