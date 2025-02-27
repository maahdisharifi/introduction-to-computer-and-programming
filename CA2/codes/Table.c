#include "Table.h"
#include <stdio.h>

void Table(int P1cardNumbers[],char P1cardTypes[]){
   //this function prints our cards
    int i;
    printf("\n");
printf("numbers |");
    for(int x=0;x<11;x++){
        printf("%d\t|",P1cardNumbers[x]);     
}
    
    printf("\n");
for(i=0;i<90;i++){
    printf("-");
}
int k=0;
printf("\n");
printf("symbols |");
    
        for(int x=0;x<11;x++){
            printf("%c\t|",P1cardTypes[x]);
}
    

printf("\n");
for(i=0;i<90;i++){
    printf("-");
}
    printf("\n");
    printf("\t");
    for(i=0;i<11;i++){
        printf("%d\t|",i);
    }
}