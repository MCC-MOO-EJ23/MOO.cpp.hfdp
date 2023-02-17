all: clean compile run

clean:
	rm -f principal
compile: 
	g++ *.cpp -o principal
run: 
	clear
	./principal