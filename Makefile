all: Fractional.o Rational.o main_rational.o
	g++ Fractional.o Rational.o main_rational.o

Fractional.o: Rational/main_rational.cpp
	g++ -c Rational/Fractional.cpp

Rational.o: Rational/main_rational.cpp
	g++ -c Rational/Rational.cpp

main_rational.o: Rational/main_rational.cpp
	g++ -c Rational/main_rational.cpp

clean:
	rm -rf *.o all
    
