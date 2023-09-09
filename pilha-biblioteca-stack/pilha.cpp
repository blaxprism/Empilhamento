#include <iostream>
#include <stack>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	stack <string> lista;
	string valorinserido;
	int quantidade;
	int tamanho;
	cout << "=============================================================================\n";
	cout << "Digite a quantidade de valores que voce vai inserir" << endl;
	cout << "=============================================================================\n";
	cin >> quantidade;
	cout << "=============================================================================\n";
	for (int i = 0; i < quantidade; i++){
		cout << "Digite o " << i+1 << " valor:\n" ;
		cin >> valorinserido;	
		lista.push(valorinserido);	
	}
	tamanho = lista.size();
	cout << "=============================================================================\n";
	cout << "tamanho da pilha: " << tamanho << endl; 
	cout << "=============================================================================\n";
	for (int i = 0; i < tamanho; i++){
		cout << lista.top() << endl;
		lista.pop();
	}
	cout << "=============================================================================\n";

	system("pause");
	return 0;
}