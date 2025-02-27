#include "screen.h"
#include <stdio.h>

void screen(int* Ip2Choice,int *Ip3Choice,int *Ip4Choice,int * p1Index,char P1cardTypes[],int P1cardNumbers[],int * Team1_points,int * Team2_points,char* p1Choice,char p2Choice[],char *p3Choice,char *p4Choice,int p1Cards[4][11],int totalCards[4][11]){
    // this function prints the screen and also updates the scores
    int i=0;
    int j=0;
for(i=0;i<66;i++){
   if(i==25){
      printf("P3");
   }
   else if(i==65){
      printf("Team 1: %d",*Team1_points);
   }
   else{
      printf(" ");
   }
}
printf("\n");
for(i=1;i<26;i++){

   for(j=1;j<53;j++){
      if(i==1||i==25){
         printf("-");
      }
      else if((j==1||j==52) && i!=13&& i!=2&& i!=24){
         
         printf("|");
      }
      else{
         printf(" ");
      }
      if(j==25&&i==2){
         printf("%c%d",p3Choice[0],*Ip3Choice);
         break;
      }
      if(j==25&&i==24){
         printf("%c%d",*p1Choice,P1cardNumbers[*p1Index]);
         break;
      }
      if(i==13&&j==1){
         printf("\bP2 ");
         printf("%c%d",p2Choice[0],*Ip2Choice);
      }
      else if(i==13&&j==50){
         printf("\b");
         printf("\b");
         printf("\b");
         printf("\b");
      printf("%c%d",p4Choice[0],*Ip4Choice);
         printf(" P4"); 
      }
   }
printf("\n");
}
for(i=0;i<66;i++){
   if(i==65){
      printf("Team 2:%d",*Team2_points);
   }
   else if(i==25){
      printf("P1");
   }
   else{
   printf(" ");
   }
}
}