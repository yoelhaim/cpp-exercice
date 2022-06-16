NAME = main

src = main.cpp ft_strlen.cpp revers.cpp capitalise.cpp is_prime.cpp ft_atoi.cpp
obj = $(src:.c=.o)
$(NAME) : $(obj)
	c++ $(obj) -o $(NAME)
all :$(NAME)
%.o: %.cpp
	c++ $(obj) $< -o $@
