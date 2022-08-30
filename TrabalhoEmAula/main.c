#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// rand() retorna valor random, função da stdlib

/*
primeiro criar vetor dinamico com tamanho definido pelo usuario. check
segundo inserir valores randomicos no vetor. check
terceiro imprimir vetor com valores. check
quarto ler valor inserido pelo usuario . check
quinto procurar se há valor igual no vetor. check
sexto se não houver, procurar valores somados igual ao valor inserido pelo usuario. check
setimo imprimir o valor ou valores do vetor encontrados. 
oitavo remover o valor escolhido pelo usuario do vetor. maybe check
nono redimencionar vetor.

 changelog:
 todos vectorPos++ trocados por *(vector++) ou *(vector+j)
*/

int main(void){

    int vectSize, numCheck, numOption;
    int *vector, *vectorPos;
    int j = 0, i = 0, k = 0, l = 0, countNunsCheck = 0; //mudar nome da variavel
    
    printf("Entre com tamanho do vetor:");
    scanf("%d", &vectSize);//lendo tamanho do vetor dado pelo usuario
    printf("\n\n\n");

    vector = (int *)malloc(vectSize*sizeof(int)); //definindo tamanho do vetor dinamicamente
    vectorPos = vector;//salvando endereço do vetor numa variavel auxiliar

    for(i = 0; i < vectSize; i++){

        *(vectorPos+i) = rand(); //inserindo valores aleatorios no vetor
    }

     for(i = 0; i < vectSize; i++){ //imprimindo valores do vetor

        printf("%d ", *(vectorPos+i));
    }

    printf("Entre com o valor a ser procurado no vetor: ");
    scanf("%d", &numCheck);//le o numero a ser verificado no vetor
    printf("\n\n\n");

    for(i = 0; i <= vectSize; i++){

        if(*(vectorPos+i) == numCheck){

            countNunsCheck++; //contador para controle de quantos numeros foram encontrados
            for(j = i; j < vectSize-1; j++){
                *(vectorPos+j) = *(vectorPos+j+1);
            }


           }
        }
        if(countNunsCheck > 0){
            
            vectorPos = vector;
            vectorPos = (int *)realloc(vector, (vectSize-1)*sizeof(int));
        }

    if(countNunsCheck == 0){

        printf("Nao foi encontrado valor.\nProcurando valores somados...\n");
        //aqui realiza a soma dos elementos para saber se ha possiveis
        for(i = 0; i < vectSize; i++){

            for(j = 0; j < vectSize; j++){

                if(i != j && (*(vectorPos+i) + *(vectorPos+j)) == numCheck){    /*condição é verdadeira quando i for diferente de j
                                                                                para não pegar valores na mesma posição do vetor, e quando a soma dos valores
                                                                                for igual ao valor de numCheck.*/

                    countNunsCheck++; // aumenta contagem de checagem dos valores
                    printf("valores encontrados: %d e %d", *(vectorPos+i), *(vectorPos+j));
                    printf("\n\n\n");

                    for(k = i; k < vectSize-2; k++){ //inicia pelo indice do primeiro valor
                        for(l = j; l < vectSize-1; l++){// inicia pelo indice do segundo valor

                            *(vectorPos+l) = *(vectorPos+l+1);//puxa todos valores 1 unidade para tras removendo o valor no indice determinado
                        }

                        *(vectorPos+k) = *(vectorPos+k+1);//puxa todos valores 1 unidade para tras removendo o valor no indice determinado
                    }                   
                }                    
            }
        }

        vectorPos = vector;
        vectorPos = (int *)realloc(vector, (vectSize-2)*sizeof(int));
    }

    return 0;
}

