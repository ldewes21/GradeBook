// A notação /* */ é utilizada para fazer comentários que ocupem mais de uma linha. Todo o texto dentro desta notação será desconsiderado na compilação do código. A notação tem a // mesma função, com a diferença que tudo que for escrito e após ela e na MESMA linha será desconsiderado.
/* GradeBook.h
Definições de classes e funções da biblioteca GradeBook.  
Tenho como filosofia que um código fonte tenha que ser entendido por um leigo,alguém que nunca programou na vida, então meus códigos terão comentários sempre que eu considerar necessário para o entendimento dos leigos.
*/
 
#include <string> //o programa utiliza a classe de string padrão C++
using std::string;

//definição da classe GradeBook
class GradeBook
{
	public://funções e variáveis de acesso público da classe
	
		GradeBook(string); //o construtor inicializa o nome do curso
		void setCourseName(string);//funcção para configurar o nome do curso
		string getCourseName();//recupera o nome do curso
		void displayMessage();//exibe uma mensagem de boas vindas
		void inputGrades();//insere um número arbitrário de notas pelo usuário
		void displayGradeReport();//exibe um relatório das notas recebidas
	
	private:
		string courseName;//nome do curso
		//contadores de notas A a F abaixo
		int aCount;
		int bCount;
		int cCount;
		int dCount;
		int eCount;
		int fCount;
	
};// fim da classe GradeBook
