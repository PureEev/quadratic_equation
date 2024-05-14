CC = gcc
CFLAGS = -Wall -Wextra -std=c99

quadratic_equation.o: quadratic_equation.c quadratic_equation.h
    $(CC) $(CFLAGS) -c quadratic_equation.c -o quadratic_equation.o

test: quadratic_equation.o tests.c
    $(CC) $(CFLAGS) tests.c quadratic_equation.o -o test
    ./test

check: test

clean:
    rm -f *.o test

