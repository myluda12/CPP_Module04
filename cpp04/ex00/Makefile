 
NAME =	Polymorphism

SRC =	polymorphism.cpp\
		WrongAnimal.cpp\
		main.cpp


OBJS = ${SRC:.cpp=.o}



 CC = c++

all : $(NAME)

$(NAME) : ${OBJS}
		
		$(CC) $(SRC) -o  $(NAME)  -Wall -Wextra -Werror -g

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all