NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)
CPP			=	c++
CFLAG		=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CPP) $(CFLAG) $(SRCS) -o $(NAME)
%.o			:	%.cpp
				$(CPP) $(CFLAGS) -c $< -o $@
clean		:	$(OBJS)
				$(RM) $(OBJS)			
fclean		:	clean
				$(RM) $(NAME)