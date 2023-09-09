#include <iostream>
#include <locale.h>
using namespace std;

int indice = -1; // inicializa o indice como -1, para que o menor indice do array seja 0
int escolher = 1; // inicializa a escolha como 1, para que primeiro seja empilhado 
string pilha[5]; // a pilha é um array de strings, mas poderia ser de qualquer outro tipo de valor


int indice = -1; 
int escolher = 1; 
string pilha[5];

//função push é a função para empilhar algo
int push(){
	string valor = " "; // a variavel valor é o valor inserido pelo usuário a ser inserido na pilha
	if (indice < 4){ // se tiver espaço na pilha
		cout << "================================================\n";
		cout << "Empilhando\n";
		cout << "================================================\n";
		cout << "Digite uma palavra\n";
		cin >> valor; // recebe uma palavra
		indice = indice + 1; //incrementa 1 no indice
		pilha[indice] = valor; //adiciona um valor na pilha com o indice correspondente
		cout<< "valor " << pilha[indice] << " inserido\n"; //exibe se o valor foi inserido corretamente
	}else{
		cout << "================================================\n";
		cout << "Pilha cheia!\n";
	}
	return 0;
}

//função pop é a função para remover algo da pilha
int pop(){
	//se a pilha não estiver vazia
	if (indice > -1){
		cout << "================================================\n";
		cout << "Desempilhando\n";
		cout << "================================================\n";
		cout << pilha[indice] << " é a palavra " << indice << endl;//exibe o item no topo da pilha
		pilha[indice] = " "; // remove o item no topo da pilha
		indice = indice - 1; // diminui o indice mais alto
	}else{
		cout << "pilha vazia\n"; // exibe que a pilha está vazia
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "Portuguese");//muda o teclado para português 
	while (escolher != 0){ // enquanto o usuário quiser ficar usando o programa ele pode
		if (escolher == 1){ //se o usuário quiser empilhar algo
			push(); // chama a função push
		}
		if (escolher == 2){
			pop(); // chama a função pop
		}
		cout << "================================================\n";
		cout << "Sair - Digite 0\n";
		cout << "Adicionar valor ao topo - Digite 1\n";
		cout << "Remover valor do topo - Digite 2\n";
		cout << "================================================\n";
		cin >> escolher; //pega a escolha do usuário
		system("cls");//limpa a tela
	}
	system("pause");
	return 0;
}
