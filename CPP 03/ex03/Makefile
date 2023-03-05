NAME		=	DiamondTrap
SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
HEADRS		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS		=	$(SRCS:%.cpp=%.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HEADRS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
				$(RM) $(OBJS)	
fclean		:	clean
				$(RM) $(NAME)
re			:	fclean all