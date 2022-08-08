#include <stdio.h>

void main (){

    FILE *pArq;
    int count;
    char alfa, fileName[10], fileLetter;

    alfa = 41;

    printf("entre com nome do arquivo de texto, exemplo, arq.txt :");
    scanf("%s", fileName);

    pArq = fopen(fileName, "r");

    for(count = 0, alfa = 41; alfa <=90;){

        
        for(; fileLetter != EOF; fileLetter = getc(pArq)){

             if((alfa || alfa+32) == fileLetter){
                count++;
             }
       
        }
        printf("a letra %c repetiu %i vezes\n", alfa, count);
    
    fclose(pArq);


    }







}