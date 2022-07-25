CC = g++
FLAGS = -g -O2 -Wall -Werror

build: 
	$(CC) $(FLAGS) exercise1.cpp -o ex1.elf
	$(CC) $(FLAGS) exercise2.cpp -o ex2.elf
	$(CC) $(FLAGS) exercise3.cpp -o ex3.elf
	$(CC) $(FLAGS) bubble_sort.cpp -o sort1.elf
	$(CC) $(FLAGS) insertion_sort.cpp -o sort2.elf
	$(CC) $(FLAGS) merge_sort.cpp -o sort3.elf
	$(CC) $(FLAGS) ssm_n2.cpp -o ssm1.elf
	$(CC) $(FLAGS) ssm_nlogn.cpp -o ssm2.elf
	$(CC) $(FLAGS) ssm_n.cpp -o ssm3.elf
	$(CC) $(FLAGS) z.cpp -o z_parc.elf
	$(CC) $(FLAGS) hanoi.cpp -o hanoi.elf

clean:
	rm *.elf
