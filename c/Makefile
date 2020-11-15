# Output binary name
bin=calc

# Compiler/linker flags
CFLAGS += -g -Wall -fPIC 
LDLIBS += -lm -lncurses
LDFLAGS +=

# Source C files
src=main.c factors.c gcf.c lcm.c gen.c prime.c factorial.c
obj=$(src:.c=.o)

# Makefile recipes --
all: $(bin) libmain.so

$(bin): $(obj)
	$(CC) $(CFLAGS) $(LDLIBS) $(LDFLAGS) $(obj) -o $@

libmain.so: $(obj)
	$(CC) $(CFLAGS) $(LDLIBS) $(LDFLAGS) $(obj) -shared -o $@

docs: Doxyfile
	doxygen

clean:
	rm -f $(bin) $(obj) libmain.so
	rm -rf docs

# Individual dependencies --
main.o: main.c 
factors.o: factors.c factors.h
gen.o: gen.c gen.h
gcf.o: gcf.c gcf.h
lcm.o: lcm.c lcm.h
prime.o: prime.c prime.h
factorial.o: factorial.c factorial.h


run:  $(bin) libmain.so