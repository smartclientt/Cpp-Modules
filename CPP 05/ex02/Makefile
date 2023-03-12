NAME		=	28B_not_28C
SRCS		=	main.cpp Bureaucrat.cpp AForm.cpp	\
				PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
HEADRS		=	Bureaucrat.hpp AForm.hpp 			\
				PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

OBJS		=	$(SRCS:%.cpp=%.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

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
