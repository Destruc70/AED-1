#include <stdio.h>
#include <stdlib.h>

void main(void){

    int i;
    FILE *pArq;
    char c; 
    pArq = fopen("arq.txt", "r");

    for (i = 0; getc(pArq) != EOF; i++);
    printf("%i   ", i);

    fclose(pArq);




}