ALL = main

all: $(ALL)

main: main.o
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean: 
	rm -f *.s *.o

distclean: clean
	rm -f $(ALL)