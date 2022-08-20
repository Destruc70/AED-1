#include <stdio.h>
#include <stdlib.h>

typedef struct pessoaEstrutura{

    char nome[10];
    int idade;
    char telefone[10];

}Pessoa;

void main(){

    /*
        Todas variaveis com excessão da struct Pessoa devem ser ponteiros
        logo deve-se utilizar de alocação dinamica.
    */

    Pessoa pessoasArray[10]; //array de 10 pessoas
    void *pBuffer; //ponteiro para o buffer, sem tipagem.
    int *i; //contador do laço
    char *nomeBuffer, *telefoneBuffer;

    pBuffer = malloc(10*sizeof(char) + 10*sizeof(char) + sizeof(int) + sizeof(int) ); //aloca espaço de memoria para o buffer.

    /*
        espaço para comentarios e observações
        ordem: Char nomeBuffer, char telefoneBuffer, int i, idade

    */
    nomeBuffer = pBuffer; // string no começo do buffer
    telefoneBuffer = (char *)pBuffer + (10*sizeof(char));// string telefone 10 bytes depois do começo do bloco
    i = (int *) pBuffer + (2*10*sizeof(char)); //casting, coloca endereço do buffer para o ponteiro int, por ter 2 blocos de 10 caracteres, por isso 2*10
    

    for(*i = 0; *i < 10; *i++){ 

       // fgets(nomeBuffer, 10, stdin);
       // fgets(telefoneBuffer, 10, stdin);

    }




}