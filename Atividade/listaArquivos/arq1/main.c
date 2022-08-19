#include <stdio.h>
#include <stdlib.h>

void main (void){

    FILE *pArq;
    char c;

    printf("entre com caracter que nao seja o 0(zero): ");

    pArq = fopen("arq.txt","w"); //abrindo/criando arquivo

    
    while(1){
        scanf(" %c", &c);
        if(c == '0')
            break;
        fprintf(pArq, "%c", c);

    }

    fclose(pArq);

    pArq = fopen("arq.txt", "r");

    while(c != EOF){
        c = getc(pArq);
        printf("%c ", c);
    }
    fclose(pArq);
}