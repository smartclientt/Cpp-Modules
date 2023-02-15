NAME		=	Brainz
SRCS		=	main.cpp \
				newZombie.cpp randomChump.cpp Zombie.cpp
OBJS		=	$(SRCS:.cpp=.o)
HEADR		=	Zombie.hpp
CPP			=	c++
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