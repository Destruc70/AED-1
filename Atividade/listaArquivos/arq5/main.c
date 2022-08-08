#include <stdio.h>
#include <stdlib.h>

void main(void){

    FILE *pArq;
    char aux, c, s[10];
    int count;

    printf("entre com nome do arquivo de texto, exemplo, arq.txt :");
    fgets(s, 10, stdin);

    pArq = fopen(s, "r");
    printf("\n");
    printf("entre com a letra desejada: ");
    scanf("%c", &c);
    
    for (int i = 0; aux != EOF; i++, aux = getc(pArq)){
        if(aux == c)
            count++;
    }
    printf("A letra ocorreu %i vezes", count);

    fclose(pArq);

}