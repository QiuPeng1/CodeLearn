OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
CC = g++
CFLAGS = -c -Wall
LFLAGS = -Wall

all: hello
hello: $(OBJS)
	$(CC) $(LFLAGS) $^ -o $@
$(OBJS):%.o:%.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	del *.o
	del *.exe