exec.out: main.c
	gcc -o exec.out main.c
run: exec.out
	./exec.out
clean: 
	rm *.out