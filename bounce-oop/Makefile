bounce: main.o terminal.o ball.o
	g++ -o bounce main.o terminal.o ball.o

main.o: main.cpp terminal.hpp ball.hpp
	g++ -c main.cpp

terminal.o: terminal.cpp terminal.hpp
	g++ -c terminal.cpp

ball.o: ball.cpp ball.hpp terminal.hpp
	g++ -c ball.cpp

clean:
	rm -f a.out *.o bounce