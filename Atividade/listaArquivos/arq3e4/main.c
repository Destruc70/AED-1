#include <stdio.h>
#include <stdlib.h>

void main(void){

    FILE *pArq;
    char c; 
    pArq = fopen("arq.txt", "r");
    int count, consCount = 0;
    for (int i = 0; c != EOF; i++, c = getc(pArq)){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
        else if(c >= 'a' && c <= 'z') consCount++;

    }
    printf("%i c:%i", count, consCount);

    fclose(pArq);

}