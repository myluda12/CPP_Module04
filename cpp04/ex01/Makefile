 
NAME =	Polymorphism

SRC =	polymorphism.cpp\
		WrongAnimal.cpp\
		main.cpp


OBJS = ${SRC:.cpp=.o}



 CC = c++ -g

all : $(NAME)

$(NAME) : ${OBJS}
		
		$(CC) $(SRC) -o  $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all