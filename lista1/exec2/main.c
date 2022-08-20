#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){

    char tempNome[16];
    char *stringDinamica, *pStringEnd;
    int i = 0, j = 0, temp;

    stringDinamica = malloc(sizeof(char)*16);
    *stringDinamica = '\0';

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

    }
    else stringDinamica = realloc(stringDinamica, sizeof(char)*i+sizeof(char)*j);//realoca para tamanho da string;

    strcpy(stringDinamica, tempNome);
    
    //for(j = 0; *pStringEnd != '\0'; j++, pStringEnd++);
    //pStringEnd = pStringEnd - j;

    printf("entre com o nome: ");
    scanf("%[^\n]%*c", tempNome);
    i = strlen(tempNome);
    tempNome[i] = ';';
    tempNome[i+1] = '\0';
    i = strlen(tempNome);

    temp = sizeof(char)*i+sizeof(char)*j;
    stringDinamica = realloc(stringDinamica, temp);//realoca para tamanho da string, ao fazer o realloc pela segunda vez o programa crasha
    printf("here");
    strcpy(stringDinamica, tempNome);

    //for(i; i >= 0; stringDinamica++)
    



}