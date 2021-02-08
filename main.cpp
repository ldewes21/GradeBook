#include "GradeBook.h"

int main (){
	GradeBook myGradeBook ("CC 101 Programação em C++");
	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	return 0;
}
