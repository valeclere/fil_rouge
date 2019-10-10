CC= g++
CFLAGS=-Wall -Wextra

OBJ= main.o mere.o

EXEC=exec

$(EXEC) : $(OBJ)
	$(CC) -g $^ -o $@
	echo "executer avec ./exec"

%.o : %.cpp
	$(CC) -g -c $< $(CFLAGS)

clean :
	rm -rf dep *.o vgcore.*