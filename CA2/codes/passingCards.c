#include "passingCards.h"

void passingCards(int* P4cardNumbers,char P4cardTypes[],int* P3cardNumbers,char P3cardTypes[],int* P2cardNumbers,char P2cardTypes[],char P1cardTypes[],int * P1cardNumbers,int p1Cards[4][11],int p2Cards[4][11],int p3Cards[4][11],int p4Cards[4][11],int card[],int totalCards[4][11]){
// this function will pass the cards 
int i=0;
 int counter2 =0;
 int counter3=0;
int counter=5;
int counter4=0;
for(i=5;i<44;i++){
 int cardsType  = card[i]/11;
 int cardsNumber = card[i]%11;
    if(i<10){
        p2Cards[cardsType][cardsNumber] = 1;
        P2cardNumbers[counter2]=cardsNumber;
    if(cardsType ==0){
        P2cardTypes[counter2]='A';
    }
    else if(cardsType ==1){
        P2cardTypes[counter2]='B';
    }
    else if(cardsType ==2){
        P2cardTypes[counter2]='C';
    }
    else if(cardsType ==3){
        P2cardTypes[counter2]='D';
    }
    counter2++;  
}
     if(i<15&&i>=10){
    p3Cards[cardsType][cardsNumber] = 1;
    P3cardNumbers[counter3]=cardsNumber;
    if(cardsType ==0){
        P3cardTypes[counter3]='A';
        
    }
    else if(cardsType ==1){
        P3cardTypes[counter3]='B';
        
    }
    else if(cardsType ==2){
        P3cardTypes[counter3]='C';
        
    }
    else if(cardsType ==3){
        P3cardTypes[counter3]='D';
        
    }
    counter3++;
    
}
     if(i<20&&i>=15){
    p4Cards[cardsType][cardsNumber] = 1;
    P4cardNumbers[counter4]=cardsNumber;
    if(cardsType ==0){
        P4cardTypes[counter4]='A';
        
    }
    else if(cardsType ==1){
        P4cardTypes[counter4]='B';
        
    }
    else if(cardsType ==2){
        P4cardTypes[counter4]='C';
        
    }
    else if(cardsType ==3){
        P4cardTypes[counter4]='D';
        
    }
    counter4++;
}
     if(i<24&&i>=20){
    p1Cards[cardsType][cardsNumber] = 1;
    P1cardNumbers[counter]=cardsNumber;
    if(cardsType ==0){
        P1cardTypes[counter]='A';
    }
    else if(cardsType ==1){
        P1cardTypes[counter]='B';
    }
    else if(cardsType ==2){
        P1cardTypes[counter]='C';
    }
    else if(cardsType ==3){
        P1cardTypes[counter]='D';
    }
    
    counter++;
}
    if(i<28&&i>=24){
    p2Cards[cardsType][cardsNumber] = 1;
    P2cardNumbers[counter2]=cardsNumber;
    if(cardsType == 0){
        P2cardTypes[counter2]='A';
    }
    else if(cardsType ==1){
        P2cardTypes[counter2]='B';
    }
    else if(cardsType ==2){
        P2cardTypes[counter2]='C';
    }
    else if(cardsType ==3){
        P2cardTypes[counter2]='D';
    }
    
    counter2++;
}
else if(i<32&&i>=28){
    p3Cards[cardsType][cardsNumber] = 1;
    P3cardNumbers[counter3]=cardsNumber;
    if(cardsType ==0){
        P3cardTypes[counter3]='A';
        
    }
    else if(cardsType ==1){
        P3cardTypes[counter3]='B';
        
    }
    else if(cardsType ==2){
        P3cardTypes[counter3]='C';
        
    }
    else if(cardsType ==3){
        P3cardTypes[counter3]='D';
        
    }
    counter3++;
}
 if(i<36&&i>=32){
    p4Cards[cardsType][cardsNumber] = 1;
    P4cardNumbers[counter4]=cardsNumber;
    if(cardsType ==0){
        P4cardTypes[counter4]='A';
        
    }
    else if(cardsType ==1){
        P4cardTypes[counter4]='B';
        
    }
    else if(cardsType ==2){
        P4cardTypes[counter4]='C';
        
    }
    else if(cardsType ==3){
        P4cardTypes[counter4]='D';
        
    }
    counter4++;
}
 if(i<38 && i>=36){
    p1Cards[cardsType][cardsNumber] = 1;
    P1cardNumbers[counter]=cardsNumber;
    if(cardsType ==0){
        P1cardTypes[counter]='A';
    }
    else if(cardsType ==1){
        P1cardTypes[counter]='B';
    }
    else if(cardsType ==2){
        P1cardTypes[counter]='C';
    }
    else if(cardsType ==3){
        P1cardTypes[counter]='D';
    }
    
    counter++;
}
 if(i<40&&i>=38){
    p2Cards[cardsType][cardsNumber] = 1;
    P2cardNumbers[counter2]=cardsNumber;
    if(cardsType ==0){
        P2cardTypes[counter2]='A';
    }
    else if(cardsType ==1){
        P2cardTypes[counter2]='B';
    }
    else if(cardsType ==2){
        P2cardTypes[counter2]='C';
    }
    else if(cardsType ==3){
        P2cardTypes[counter2]='D';
    }
    
    counter2++;
}
 if(i<42&&i>=40){
    p3Cards[cardsType][cardsNumber] =1;
    P3cardNumbers[counter3]=cardsNumber;
    if(cardsType ==0){
        P3cardTypes[counter3]='A';
        
    }
    else if(cardsType ==1){
        P3cardTypes[counter3]='B';
        
    }
    else if(cardsType ==2){
        P3cardTypes[counter3]='C';
        
    }
    else if(cardsType ==3){
        P3cardTypes[counter3]='D';
        
    }
    counter3++;
}
 if(i<44&&i>=42){
    p4Cards[cardsType][cardsNumber] = 1;
    P4cardNumbers[counter4]=cardsNumber;
    if(cardsType ==0){
        P4cardTypes[counter4]='A';
        
    }
    else if(cardsType ==1){
        P4cardTypes[counter4]='B';
        
    }
    else if(cardsType ==2){
        P4cardTypes[counter4]='C';
        
    }
    else if(cardsType ==3){
        P4cardTypes[counter4]='D';
        
    }
    counter4++;
}
}
}