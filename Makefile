GCC = gcc
CFLAGS = -g -Wall -Wshadow
DEPS = calculator.c calculator.h
OBJ = calculator.o

# for any object file
%.o: %.c $(DEPS)
	$(GCC) $(CFLAGS) -c -o $@ $<
# do same thing for executable
calculator: $(OBJ)
	$(GCC) $(CFLAGS) -o $@ $^





# executable: dependencies
	# $(GCC) $(CFLAGS) outfile flag and name