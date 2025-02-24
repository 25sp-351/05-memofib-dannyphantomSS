CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = fib
TEST_TARGET = test_fib

all: $(TARGET) $(TEST_TARGET)

$(TARGET): fib_main.o fib.o
	$(CC) $(CFLAGS) -o $(TARGET) fib_main.o fib.o

fib_main.o: fib_main.c fib.h
	$(CC) $(CFLAGS) -c fib_main.c -o fib_main.o

fib.o: fib_func.c fib.h
	$(CC) $(CFLAGS) -c fib_func.c -o fib.o

$(TEST_TARGET): test_fib.o fib.o
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_fib.o fib.o

test_fib.o: test_fib.c fib.h
	$(CC) $(CFLAGS) -c test_fib.c

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

