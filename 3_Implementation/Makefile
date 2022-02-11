SRC = src/main.c\
src/second.c
INC = inc

all.out: $(SRC)
	gcc $^ -I$(INC) -o $@

run: target
	./all.out

clean: 
	rm ./all.out