#include <stdio.h>
#include <stdlib.h>

//>>> Exercício 01 <<<
//Método principal/de entrada
/*int main(){

    //Método que printa na tela uma mensagem.
    printf("Ola desenvolvedores iniciantes!");

    return 0;
}*/


//>>> Exercício 02 <<<
//(Calculando Idade)
/*
int main(){

    int anoNascimento = 1994;
    int anoAtual = 2020;
    int idade = anoAtual - anoNascimento;

    printf("O usuario tem %d anos", idade);

    return 0;
}
*/

//>>> Exercício 03 <<<
//(Posso entrar no Cinema?)
/*
int main(){

    int horaCinema = 20;
    int horaAtual = 20;

    if(horaAtual > horaCinema + 30){
        printf("O tempo limite para entrar ja esgotou. Porta fechada!");
    }else if (horaAtual < horaCinema - 30){
        printf("Entendemos sua ansiedade, mas o cinema ainda esta fechado.");
    }else{
        printf("Bem na hora. Corra para nao perder nada!");
    }

    return 0;
}
*/

//>>> Exercício 04 <<<
//Laços de repetição (while)
/*
int main(){

    int contador = 1;
    int limite = 10;

    while(contador <= limite){
        printf("Ola mundo!\n");
        printf("%d \n",contador);
        contador++;

        if(contador == 10){
            while(contador > 0){
                printf("Descendo...\n");
                printf("%d \n", contador);
                --contador;
            }break;
        }
    }

    return 0;
}
*/

//>>> Exercicio 05 <<<
//Solicitando dados (Scan)
/*
int main(){
    char nome[256];
    char sobrenome[256];
    int anoNascimento;
    int idade;

    printf("Olá, qual seu nome? \n");
    scanf("%s", nome);

    printf("\n Opa, prazer em lhe conhecer %s !", nome);
    printf("\n Agora me diz, qual sua idade? \n");
    scanf("%d", &idade);

    printf("\n Revisando...");
    printf("\n Seu nome eh %s e voce tem %d anos", nome, idade);

    /*Note que nao utilizamos algumas variaveis (sobrenome e anoNascimento) desenvolva voce utilizando-as*/

    //Resposta:
/*    printf("\n %s , quase fui me esquecendo. Qual seu sobrenome mesmo? \n", nome);
    scanf("\n %s", sobrenome);
    printf("\n Perfeito! Agora pra finalizar, me diga seu ano de nascimento: \n");
    scanf("%d", &anoNascimento);

    printf("\n >>> Dados Cadastrados <<<");
    printf("\n %s %s", nome, sobrenome);
    printf("\n %d anos", idade);
    printf("\n Nascido em %d", anoNascimento);
    printf("\n FIM");


    return 0;
}
*/

//>>> Exercicio 06 <<<
//Validando maioridade
/*int main(){

    char nome[256];
    int idade;

    printf("Ola, qual seu nome? \n");
    scanf("%s", nome);
    printf("Qual sua idade? \n");
    scanf("%d", &idade);

    printf("\n A primeira letra do seu nome é: %c", nome[0]);
    //O caractere selecionado ira depender da posicao do indice, iniciando em 0.

    if(idade >= 18){
        printf("%s voce e adulto.", nome);
    }else if(idade >= 12){
        printf("%s voce e adolecente.", nome);
    }else{
        printf("%s voce e crianca.", nome);
    }
}
*/

//>>> Exercicio 7 <<<
//(Pedra, papel e tesoura)
int main(){

    //strcmp(strg1, strg2) == 0

    char player1[256];
    char player2[256];

    printf("Player 1, sua vez... \n");
    scanf("%s", &player1);
    printf("Player 2, sua vez... \n");
    scanf("%s", &player2);

    if(strcmp(player1, "pedra")==0){

        if(strcmp(player2, "pedra")==0){
            printf("Empate");
        }else if(strcmp(player2, "papel")==0){
            printf("Player 2 WIN");
        }else if(strcmp(player2, "tesoura")==0){
            printf("Player 1 WIN");
        }else{
            printf("Player 2 jogou uma informacao invalida.");
        }

    }else if(strcmp(player1, "papel")==0){

        if(strcmp(player2, "pedra")==0){
            printf("Player 1 WIN");
        }else if(strcmp(player2, "papel")==0){
            printf("Empate");
        }else if(strcmp(player2, "tesoura")==0){
            printf("Player 2 WIN");
        }else{
            printf("Player 2 jogou uma informacao invalida.");
        }

    }else if(strcmp(player1, "tesoura")==0){

        if(strcmp(player2, "pedra")==0){
            printf("Player 2 WIN");
        }else if(strcmp(player2, "papel")==0){
            printf("Player 1 WIN");
        }else if(strcmp(player2, "tesoura")==0){
            printf("Empate");
        }else{
            printf("Player 2 jogou uma informacao invalida.");
        }

    }else{
        printf("Player 1 jogou uma informacao invalida.");
    }

    return 0;
}
