#include "Player1.h"
#include <stdio.h>
void Player1(char*sign,int*turn,int *p1Index,char*P1cardTypes,char* p1Choice){
    int returnValue;
    int True=1;
    int i=0;
    int flag=0;
   if(*turn==2||*turn==3||*turn==4){
   for(i=0;i<11;i++){
        if(P1cardTypes[i]==*sign){
            flag=1;
            break;
        }
   }
   }
    while(True){
    printf("\nplease choose your card!\n");
   returnValue= scanf("%d",&*p1Index);

   if(returnValue==0){
    printf("invalid input\n");
        fflush(stdin);
   }
   else if(P1cardTypes[*p1Index]=='-'){
    printf("you have already choosed this card!\n");
   }

 else if(*p1Index>10||*p1Index<0){
    printf("invalid input\n");
 } 
 else if(flag){
    if(P1cardTypes[*p1Index]!=*sign){
        printf("you can't play with this card!\n");//player should play with the sign of the first card
    }
    else{
        True=0;
    }
 }
   else if(*p1Index<=10 &&*p1Index>=0){
        
        True=0;
    }
}
 *p1Choice=P1cardTypes[*p1Index];
 if(*turn==1){
 *sign=*p1Choice;
 }
 P1cardTypes[*p1Index]='-';//this shows that the card is used

}