# ejecutables
app: main.o libft.o
	gcc main.o libft.o -o app

# fuentes
libft.o: ./library/libft.c
	gcc -c ./library/libft.c
main.o: main.c
	gcc -c main.c

# reglas mudas
.PHONY: clean # make clean, ejecuta y hace clean

clean:
	rm *.o