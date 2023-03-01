CC = c++
RM = rm -f
C++FLAGS = -Wall -Wextra -Werror
C++STDFLAGS= -std=c++98
INCLUDES_DIR = ./includes/
INCLUDES = Bureaucrat.hpp\
			Form.hpp\
			PresidentialPardonForm.hpp\
			RobotomyRequestForm.hpp\
			ShruberryCreationForm.hpp
INCLUDES_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
NAME = 28B28C
SRCS_DIR = ./srcs/
SRCS = Bureaucrat.cpp\
		Form.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShruberryCreationForm.cpp
SRCS_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(SRCS:.cpp=.o)

%.o: %.c
	${CC} -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH} $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		c++ -o $(NAME) $(OBJS)

$(OBJS): $(SRCS_PATH)
	c++ -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH}

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean re all clean