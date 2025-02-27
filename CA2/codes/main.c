#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Player1.h"
#include "P4start.h"
#include "P3start.h"
#include "P2start.h"
#include "P4middleofgame.h"
#include "P3middleofgame.h"
#include "P2middleofgame.h"
#include "Table.h"             
#include "screen.h"
#include "passingCards.h"
#include "winner.h"
void shuffle_card(int* card) {
    int i, r, temp;
    for (temp = 0, i = 0; temp < 44; i++, temp++)
        card[temp] = i;
    srand(time(NULL));
    for (i = 43; i > 0; i--) {
        r = rand() % i;
        temp = card[i];
        card[i] = card[r];
        card[r] = temp;
    }
}
int main(){
char sign;
    int P4Index=0;
    int P3Index=0;
    int P2Index=0;
    int Team1_points=0,Team2_points=0;
char p1Choice; char p2Choice[3]=""; char p3Choice[3]=""; char p4Choice[3]="";
int Ip2Choice,Ip3Choice,Ip4Choice;
    int i=0,j=0;
  char bakhsh_name;
    int turn;
  int p1Index=0;
int card[44];
int totalCards[4][11]={
    {1,2,3,4,5,6,7,8,9,10,11},
    {1,2,3,4,5,6,7,8,9,10,11},
    {1,2,3,4,5,6,7,8,9,10,11},
    {1,2,3,4,5,6,7,8,9,10,11}
};
int p1Cards[4][11] ={0};
int p2Cards[4][11] ={0};
int p3Cards[4][11]={0};
int p4Cards[4][11]={0};
int counter=0;
int P1cardNumbers[11]={0};
char P1cardTypes[11]={""};
int P2cardNumbers[11]={0};
char P2cardTypes[11]={""};
int P3cardNumbers[11]={0};
char P3cardTypes[11]={""};
int P4cardNumbers[11]={0};
char P4cardTypes[11]={""};
int min;
shuffle_card(card);
j=0;
for(i=0;i<5;i++){
    p1Cards[card[i]/11][card[i]%11] = 1;
    P1cardNumbers[j]=card[i]%11;
    j++;
    if(card[i]/11 ==0){
        P1cardTypes[counter]='A';
        counter++;
    }
    else if(card[i]/11 ==1){
        P1cardTypes[counter]='B';
        counter++;
    }
    else if(card[i]/11 ==2){
        P1cardTypes[counter]='C';
        counter++;
    }
    else if(card[i]/11 ==3){
        P1cardTypes[counter]='D';
        counter++;
    }
    
}
Table(P1cardNumbers,P1cardTypes);
int True =1;
int returnValue;
//this while loop prompts the user to give a valid input 
while(True){               
    printf("\nenter bakhsh name\n");
    returnValue = scanf("%s",&bakhsh_name);
    if(returnValue==0){
        printf("invalid input");
        fflush(stdin);
    }
  else if(bakhsh_name =='A'||bakhsh_name=='B'||bakhsh_name=='C'||bakhsh_name =='D'){
        True =0;
    }
    else{
        printf("invalid input");
        fflush(stdin);

    }
}
int Ibakhsh_name;
switch(bakhsh_name){
    case 'A':
    Ibakhsh_name=0;
    break;
    case 'B':
    Ibakhsh_name=1;
    break;
    case 'C':
    Ibakhsh_name=2;
    break;
    case 'D':
    Ibakhsh_name=3;
    break;
}
passingCards(P4cardNumbers,P4cardTypes,P3cardNumbers,P3cardTypes,P2cardNumbers,P2cardTypes,P1cardTypes,P1cardNumbers,p1Cards,p2Cards,p3Cards,p4Cards,card,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\nyou choosed %c\n",bakhsh_name);
    True =1;
    while(True){
    printf("\nplease choose your card!\n");
   returnValue= scanf("%d",&p1Index);
   if(returnValue==0){
    printf("invalid input\n");
        fflush(stdin);
   }
   else if(p1Index<=10 &&p1Index>=0){
        
        True=0;
    }
 else if(p1Index>10||p1Index<0){
    printf("invalid input");
 } 
    }
    p1Choice=P1cardTypes[p1Index];
    sign=p1Choice;
    P1cardTypes[p1Index]='-';
    
    
    P2middleofgame(&sign,&Ip2Choice,p2Cards,P2cardTypes,&bakhsh_name,&P2Index,p2Choice,P2cardNumbers);
    P3middleofgame(&sign,&Ip3Choice,p3Cards,P3cardTypes,&bakhsh_name,&P3Index,p3Choice,P3cardNumbers);
    P4middleofgame(&sign,&Ip4Choice,p4Cards,P4cardTypes,&bakhsh_name,&P4Index,p4Choice,P4cardNumbers);
   screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
Table(P1cardNumbers,P1cardTypes);
winner(&turn,&p1Choice,p2Choice,p3Choice,p4Choice,&p1Index,&Ip2Choice,&Ip3Choice,&Ip4Choice,P1cardNumbers,P1cardTypes,&Team1_points,&Team2_points,&bakhsh_name);
   printf("\nyou choosed %c%d\n",p1Choice,P1cardNumbers[p1Index]);
screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
Table(P1cardNumbers,P1cardTypes);
printf("\n");
if(turn==1||turn==3){
    printf("Team 1 got 1 point\n");
}
else{
    printf("Team 2 got 1 point\n");
}
while(Team1_points<6 && Team2_points<6){
    //turn 1->P1, turn 2->P2, turn 3->P3, turn 4->P4
if(turn==1){
     Player1(&sign,&turn,&p1Index,P1cardTypes,&p1Choice);
     P2middleofgame(&sign,&Ip2Choice,p2Cards,P2cardTypes,&bakhsh_name,&P2Index,p2Choice,P2cardNumbers);
    P3middleofgame(&sign,&Ip3Choice,p3Cards,P3cardTypes,&bakhsh_name,&P3Index,p3Choice,P3cardNumbers);
    P4middleofgame(&sign,&Ip4Choice,p4Cards,P4cardTypes,&bakhsh_name,&P4Index,p4Choice,P4cardNumbers);
    winner(&turn,&p1Choice,p2Choice,p3Choice,p4Choice,&p1Index,&Ip2Choice,&Ip3Choice,&Ip4Choice,P1cardNumbers,P1cardTypes,&Team1_points,&Team2_points,&bakhsh_name);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
Table(P1cardNumbers,P1cardTypes);
printf("\nyou choosed %c%d\n",p1Choice,P1cardNumbers[p1Index]);
printf("\n");
if(turn==1||turn==3){
    printf("Team 1 got 1 point\n");
}
else{
    printf("Team 2 got 1 point\n");
}

}   
else if(turn==2){
    P2start(&sign,&Ip2Choice,P2cardTypes,P2cardNumbers,&P2Index,p2Choice,&Ibakhsh_name,&bakhsh_name,p2Cards);
    P3middleofgame(&sign,&Ip3Choice,p3Cards,P3cardTypes,&bakhsh_name,&P3Index,p3Choice,P3cardNumbers);
    P4middleofgame(&sign,&Ip4Choice,p4Cards,P4cardTypes,&bakhsh_name,&P4Index,p4Choice,P4cardNumbers);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\n");
    Player1(&sign,&turn,&p1Index,P1cardTypes,&p1Choice);
    winner(&turn,&p1Choice,p2Choice,p3Choice,p4Choice,&p1Index,&Ip2Choice,&Ip3Choice,&Ip4Choice,P1cardNumbers,P1cardTypes,&Team1_points,&Team2_points,&bakhsh_name);
   screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\nyou choosed %c%d\n",p1Choice,P1cardNumbers[p1Index]);
    printf("\n");
    if(turn==1||turn==3){
    printf("Team 1 got 1 point\n");
}
else{
    printf("Team 2 got 1 point\n");
}
}
 else if(turn==3){
    P3start(&sign,&Ip3Choice,P3cardTypes,P3cardNumbers,&P3Index,p3Choice,&Ibakhsh_name,&bakhsh_name,p3Cards);
    P4middleofgame(&sign,&Ip4Choice,p4Cards,P4cardTypes,&bakhsh_name,&P4Index,p4Choice,P4cardNumbers);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\n");
    Player1(&sign,&turn,&p1Index,P1cardTypes,&p1Choice);
    P2middleofgame(&sign,&Ip2Choice,p2Cards,P2cardTypes,&bakhsh_name,&P2Index,p2Choice,P2cardNumbers);
    winner(&turn,&p1Choice,p2Choice,p3Choice,p4Choice,&p1Index,&Ip2Choice,&Ip3Choice,&Ip4Choice,P1cardNumbers,P1cardTypes,&Team1_points,&Team2_points,&bakhsh_name);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\nyou choosed %c%d\n",p1Choice,P1cardNumbers[p1Index]);
    printf("\n");
    if(turn==1||turn==3){
    printf("Team 1 got 1 point\n");
}
else{
    printf("Team 2 got 1 point\n");
}
}
 else if(turn==4){
    P4start(&sign,&Ip4Choice,P4cardTypes,P4cardNumbers,&P4Index,p4Choice,&Ibakhsh_name,&bakhsh_name,p4Cards);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\n");
     Player1(&sign,&turn,&p1Index,P1cardTypes,&p1Choice);
     P2middleofgame(&sign,&Ip2Choice,p2Cards,P2cardTypes,&bakhsh_name,&P2Index,p2Choice,P2cardNumbers);
     P3middleofgame(&sign,&Ip3Choice,p3Cards,P3cardTypes,&bakhsh_name,&P3Index,p3Choice,P3cardNumbers);
     winner(&turn,&p1Choice,p2Choice,p3Choice,p4Choice,&p1Index,&Ip2Choice,&Ip3Choice,&Ip4Choice,P1cardNumbers,P1cardTypes,&Team1_points,&Team2_points,&bakhsh_name);
    screen(&Ip2Choice,&Ip3Choice,&Ip4Choice,&p1Index,P1cardTypes,P1cardNumbers,&Team1_points,&Team2_points,&p1Choice,p2Choice,p3Choice,p4Choice,p1Cards,totalCards);
    Table(P1cardNumbers,P1cardTypes);
    printf("\nyou choosed %c%d\n",p1Choice,P1cardNumbers[p1Index]);
    printf("\n");
    if(turn==1||turn==3){
    printf("Team 1 got 1 point\n");
}
else{
    printf("Team 2 got 1 point\n");
}
}
}
if(Team1_points==6){
    printf("Team 1 won!!!");
}
else{
    printf("Team 2 won!!!");
}
return 0;
}










    