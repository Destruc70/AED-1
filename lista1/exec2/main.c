#include <stdio.h>
#include <stdlib.h>

void main(){

    char tempNome[16];
    char *stringDinamica;
    int i = 0;

    fgets(tempNome, 16, stdin);
    fgetche(); //limpa buffer

    while(tempNome[i] != '\0'){        
        
        i++;

    }
    
    stringDinamica = malloc(sizeof(char)*i);



}