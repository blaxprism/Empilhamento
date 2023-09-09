Algoritmo "pilha"

var //Declaração de variáveis globais
    indice: inteiro // indice do maior valor da pilha
    escolher : inteiro //escolha de opções(sair, empilhar, desempilhar)
    pilha: vetor [0..4] de caractere //vetor da pilha
    valor: caractere //valor atualmente inserido pelo usuário a ser inserido na pilha
    
// declaração do procedimento (que é uma função que não retorna nada), nesse caso ela apenas adiciona na pilha
procedimento push(var indice:inteiro; valor: caractere) // recebe o indice correspondente ao valor atualmente inserido
var // declaração de variaveis locais do procedimento

inicio
   pilha[indice] <- valor // insere um valor na pilha
   escreval("valor ", pilha[indice], " inserido")// escreve que o valor foi inserido
fimprocedimento

procedimento pop(var indice:inteiro)//procedimento para remover valor da pilha, recebe o indice atual
var
inicio
   se indice > -1 entao // verifica se tem valores na pilha
      escreval(pilha[indice], " é a palavra", indice)//escreve o valor no topo da pilha
      pilha[indice] <- "" //retira o valor do topo da pilha
      indice <- indice - 1 // diminui o indice correspondente ao maior valor da pilha
   senao entao
      escreval("pilha vazia")//escreve que a pilha está vazia
   fimse
fimprocedimento

inicio
   indice <- -1 // inicializa o indice em -1 para que o menor indice seja 0
   escolher <- 1 //inicializa a escolha como 1, para que a primeira ação seja empilhar algo
   enquanto escolher <> 0 faca //repete o código até que o usuário escolha sair
      se escolher = 1 entao //se a escolha for empilhar mais um valor
         escreval("======================")
         escreval("Empilhando")
         escreval("======================")
         escreval("Digite uma palavra")// recebe uma palavra inserida pelo usuário
         leia(valor) //salva na variavel valor para depois inserir na pilha
         se indice < 4 entao //se a pilha não estiver cheia
            indice <- indice+1 // aumenta o indice correspondente
            push(indice, valor) //chama a função push inserindo o valor no vetor com o indice atual
         senao entao
            escreval("pilha cheia")//se a pilha estiver cheia, emite um alerta
         fimse
      fimse
      se escolher = 2 entao//se a escolha for desempilhar
         escreval("======================")
         escreval("Desempilhando")
         pop(indice)//chama a função pop e informa o indice atual
      fimse
      escreval("===================")
      escreval("Sair - Digite 0")
      escreval("Adicionar valor ao topo - Digite 1")
      escreval("Remover valor do topo - Digite 2")
      escreval("===================")
      leia(escolher)//pergunta ao usuário qual a próxima ação dele
      limpatela
   fimenquanto
fimalgoritmo