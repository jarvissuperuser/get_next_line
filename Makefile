SRC = m.c get_next_line.c
TG = ts
lib = libft/libft.a

all :$(TG)

$(TG) : $(lib)
	gcc -Wall -Werror -Wextra ./m.c ./get_next_line.c -L libft/ -lft -o $(TG)

$(lib) :
	make -C libft/


