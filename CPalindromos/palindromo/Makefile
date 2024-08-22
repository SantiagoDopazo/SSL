all: palindromos palindromo_tests

clean:
	rm -f *.o palindromos palindromo_tests

palindromos: palindromos.o palindromo_mejorado.o
	gcc palindromos.o palindromo_mejorado.o -o palindromos

palindromo_tests: palindromo_tests.o palindromo_mejorado.o
	gcc palindromo_tests.o palindromo_mejorado.o -o palindromo_tests

palindromos.o: palindromos.c palindromo.h
	gcc -c palindromos.c

palindromo_tests.o: palindromo_tests.c palindromo.h
	gcc -c palindromo_tests.c

palindromo_mejorado.o: palindromo_mejorado.c palindromo.h
	gcc -c palindromo_mejorado.c

