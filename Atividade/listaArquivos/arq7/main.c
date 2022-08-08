#include <stdio.h>

void main (){

    FILE *pArq, *pArq2;
    int count;
    char alfa, fileName[10], fileLetter;

    alfa = 41;

    printf("entre com nome do arquivo de texto, exemplo, arq.txt :");
    scanf("%s", fileName);

    pArq = fopen(fileName, "r");
    pArq2 = fopen ("Saida.txt", "w");

    for(int i = 0; fileLetter != EOF; i++, fileLetter = getc(pArq)){

        if(fileLetter >= alfa && fileLetter <= alfa+25){
                fputc(34, pArq2);
        }
       
    }
    fclose(pArq);
    fclose(pArq2);

}