//Definições de função da classe GradeBook.

#include <iostream>//biblioteca padrão de entrada e saída de dados c++
using std::cin;
using std::cout;
using std:: endl;

//#include <cstdlib>//Biblioteca de código legado C.

#include "GradeBook.h"//Inclui a definição da classe GradeBook

//O construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook (string name){
	
	setCourseName (name); //valida e armazena name
	//inicializa os contadores como 0
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	eCount = 0;
	fCount = 0;
	
} 
//fim do construtor GradeBook

//função para configurar o nome do curso, limita o número de caracteres a 25.
void GradeBook::setCourseName (string name){
	
	if(name.length() <= 25) //se o nome tiver 25 ou menos caracteres
		courseName = name; //armazena o nome do curso no objeto
			else { // se for maior que 25 caracteres
				courseName = name.substr(0, 25); //selecina os primeiros 25 caracteres
				cout << "O nome \"" << name << "\" excede o limite máximo de 25 caracteres." << endl;
				
			}
			//fim do if...else
}
//fim de setCourseName;

//função para recuperar o nome do curso
string GradeBook::getCourseName(){

	return courseName;//retorna o nome do curso	
	}
//fim de getCourseName

//exibe uma mensagem de boas vindas
void GradeBook::displayMessage(){

	cout << "Bem vindo a grade book para \n" << getCourseName() << "!\n" << endl;

}
//fim de displayMessage

// insere o as notas fornecidas pelo usuário e atualiza os contadores de notas
void GradeBook::inputGrades(){
	int grade;//variável que recebe as notas inseridas pelo usuário
	//pede a entrada das notas 
	cout << "Entre com as notas em letras de A a F" << endl;
	cout << "Ou entre com comando EOF para encerrar a entrada de notas" << endl;
	while((grade = cin.get()) != EOF)//recebe a nota e já testa para ver se o comando EOF foi inserido
		{
			//determina que nota foi inserida
			switch(grade)
				{
				case 'A':
				case 'a':
					aCount++;
					break;//vai para o fim do switch
				
				case 'B':
				case 'b':
					bCount++;
					break;//vai para o fim do switch
				
				case 'C':
				case 'c':
					cCount++;
					break;//vai para o fim do switch
				
				case 'D':
				case 'd':
					dCount++;
					break;//vai para o fim do switch
				
				case 'E':
				case 'e':
					eCount++;
					break;//vai para o fim do switch
				
				case 'F':
				case 'f':
					fCount++;
					break;//vai para o fim do switch
					
				case '\n':
				case '\t':
				case ' ':
				break;//vai para o fim do switch
					
				default:// captura todos os outros carcteres 
					cout << "Nota inválida inserida. Favor inserir uma nota de A a F ou o comando EOF" << endl;
					break;
				}
				//fim do switch
		}//fim do while
}
//fim de inputGrades

//função para gerar e mostar o relatório das notas

void GradeBook::displayGradeReport(){
	//exibe o realatório das notas
	cout << "\n Número de estudantes que recebeu cada nota"
		<<"\nA:" << aCount
		<<"\nB:" << bCount
		<<"\nC:" << cCount
		<<"\nD:" << dCount
		<<"\nE:" << eCount
		<<"\nF:" << fCount
		<< endl;
}//fim de displayGradeReport
