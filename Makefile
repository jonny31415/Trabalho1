ALL = main

all: $(ALL)

main: main.o elevar_ao_quadrado.o multiplicar_por_10.o calcular_soma.o
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean: 
	rm -f *.s *.o main

distclean: clean
	rm -f $(ALL)