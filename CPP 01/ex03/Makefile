NAME		=	Violence
SRCS		=	main.cpp \
				HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		=	$(SRCS:.cpp=.o)
CPP			=	c++
HEADR		=	HumanA.hpp HumanB.hpp Weapon.hpp
CFLAG		=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HEADR)
				$(CPP) $(CFLAG) $(SRCS) -o $(NAME)
%.o			:	%.cpp
				$(CPP) $(CFLAG) -c $< -o $@
clean		:	$(OBJS)
				$(RM) $(OBJS)	
fclean		:	clean
				$(RM) $(NAME)
re			:	fclean all