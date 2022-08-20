#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){

    char tempNome[16];
    char *stringDinamica, *pStringEnd;
    int i = 0, j = 0, temp;

    stringDinamica = malloc(sizeof(char));
    *stringDinamica = '\000';
    

    printf("entre com o nome: ");
    scanf("%[^\n]%*c", tempNome);

    i = strlen(tempNome);
    tempNome[i] = ';';
    tempNome[i+1] = '\0';
    i = strlen(tempNome);

    pStringEnd = stringDinamica;    
    for(j = 0; *pStringEnd != '\0'; j++, pStringEnd++);

    if(j > 0){

        stringDinamica = realloc(stringDinamica, sizeof(char)*i+sizeof(char)*j);//realoca para tamanho da string;
        printf("entrou");

    }
    else stringDinamica = realloc(stringDinamica, sizeof(char)*i+sizeof(char)*j);//realoca para tamanho da string;

    strcpy(stringDinamica, tempNome);
    
    for(j = 0; *pStringEnd != '\0'; j++, pStringEnd++);
    pStringEnd = pStringEnd - j;

    pStringEnd = realloc(pStringEnd, 3);//realoca para tamanho da string;

    printf("entre com o nome: ");
    scanf("%[^\n]%*c", tempNome);
    i = strlen(tempNome);
    tempNome[i] = ';';
    tempNome[i+1] = '\0';
    i = strlen(tempNome);

    temp = sizeof(char)*i+sizeof(char)*j;
    printf("aqui 22");
    stringDinamica = realloc(stringDinamica, temp);//realoca para tamanho da string;

    strcpy(stringDinamica, tempNome);
    printf("aqui ");

    //for(i; i >= 0; stringDinamica++)
    



}