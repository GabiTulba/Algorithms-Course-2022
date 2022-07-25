CC = g++
FLAGS = -g -O2 -Wall -Werror

build: 
	$(CC) $(FLAGS) perm.cpp -o perm.elf
	$(CC) $(FLAGS) dame.cpp -o dame.elf
	$(CC) $(FLAGS) binsearch.cpp -o binsearch.elf
	$(CC) $(FLAGS) cb.cpp -o cb.elf
	$(CC) $(FLAGS) invers.cpp -o invers.elf
	$(CC) $(FLAGS) csumq.cpp -o csumq.elf
	$(CC) $(FLAGS) mars.cpp -o mars.elf

clean:
	rm *.elf
