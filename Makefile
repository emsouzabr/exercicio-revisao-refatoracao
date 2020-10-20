OBJS	= main.o Empregado.o Engenheiro.o Vendedor.o 
SOURCE	= main.cpp Engenheiro.cpp Vendedor.cpp 
HEADER	= Empregado.hpp
OUT		= vpl
CC		= g++
FLAGS	 = -g -c -Wall  -stdlib=libc++ #-stdlib=libstdc++
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Empregado.o: Empregado.cpp
	$(CC) $(FLAGS) Empregado.cpp 

VeEngenheiroc1D.o: Engenheiro.cpp
	$(CC) $(FLAGS) Engenheiro.cpp

Vendedor.o: Vendedor.cpp
	$(CC) $(FLAGS) Vendedor.cpp

clean:
	rm -f $(OBJS) $(OUT)

debug: $(OUT)
	valgrind $(OUT)

valgrind: $(OUT)
	valgrind $(OUT)

valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full $(OUT)

valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes --show-reachable=yes --track-fds=yes $(OUT)