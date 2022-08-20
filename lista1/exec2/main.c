#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){

    char tempNome[16];
    char *stringDinamica, *pStringEnd;
    int i = 0, j = 0;

    printf("entre com o nome: ");
    scanf("%[^\n]%*c", tempNome);

    i = strlen(tempNome);
    tempNome[i] = ';';
    tempNome[i+1] = '\0';
    i = strlen(tempNome);
    
    stringDinamica = malloc(sizeof(char)*i);

    strcpy(stringDinamica, tempNome);
    

    printf("entre com o nome: ");
    scanf("%[^\n]%*c", tempNome);
    i = strlen(tempNome);
    tempNome[i] = ';';
    tempNome[i+1] = '\0';
    i = strlen(tempNome);

    pStringEnd = stringDinamica;    
    for(i = 1; *pStringEnd != '\0'; i++, pStringEnd++){
        printf("%d", i);
        printf("%c\n", *pStringEnd);

    }    

    stringDinamica = realloc(stringDinamica, sizeof(char)*i+sizeof(char)*j);
    strcpy(stringDinamica, tempNome);

    //for(i; i >= 0; stringDinamica++)
    



}