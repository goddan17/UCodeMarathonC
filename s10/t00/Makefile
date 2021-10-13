flags := -std=c11 -Wall -Wextra -Werror -Wpedantic
name := read_file

all: MINILIBMX

MINILIBMX:
	clang $(flags) src/*.c -o $(name)
	
claen: 
	rm -f $(name)

uninstall: 
	rm -f $(name)

reinstall:
	make uninstall
	make

