# variables
COMPILER=g++-11
OBJS= 1.o 2.o 3.o 4.o main.o # for static library creation

# creating object files
1.o:1.cpp
	@echo "compiling $?"
	@$(COMPILER) -c 1.cpp

2.o:2.cpp
	@echo "compiling $?"
	@$(COMPILER) -c 2.cpp

3.o:3.cpp
	@echo "compiling $?"
	@$(COMPILER) -c 3.cpp

main.o:main.cpp
	@echo "compiling $?"
	@$(COMPILER) -c main.cpp

# running object files
all: $(OBJS)
	$(COMPILER) $? -o main.out

clean: *.o
	rm *.o 

# command to use cpp compiler for c files
%.o: %.c
	@echo "compiling $?"
	@$(COMPILER) -c $?

# creating library and running main
libmytest.a:$(OBJS)
	@echo "creating library : " $@
	@ar rc libmytest.a $(OBJS)

mainmytest.out:libmytest.a
	$(COMPILER) main.o -L. -lmytest -o $@
# for shared libraries

objects: 1.cpp 2.cpp 3.cpp
	g++-11 -fPIC -c 1.cpp 2.cpp 3.cpp

libmytest2.so: 1.cpp 2.cpp 3.cpp
	g++-11 -shared -o libmytest2.so 1.o 2.o 3.o

run:libmytest2.so
	export LD_LIBRARY_PATH=/home/Test/buildTools/day2
	g++-11 main.cpp -L. -lmytest2 -o mytest2.out
