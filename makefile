#makefile da biblioteca GradeBook.
teste: main.cpp GradeBook.o
	g++ -o teste main.cpp GradeBook.o
	
GradeBook.o: GradeBook.cpp GradeBook.h
	g++ -c GradeBook.cpp
