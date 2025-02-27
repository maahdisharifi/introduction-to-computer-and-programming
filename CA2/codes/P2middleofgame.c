#include "P2middleofgame.h"

void P2middleofgame(char*sign,int* Ip2Choice,int p2Cards[4][11],char P2cardTypes[],char *bakhsh_name,int*P2Index,char p2Choice[],int* P2cardNumbers){
    int i=0;
    int Max;
int flag=1;
int index;
int min=0;
int Ibakhsh_name;
switch(*bakhsh_name){
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
for(i=0;i<11;i++){
    if(P2cardTypes[i]== *sign){
        p2Choice[0]=P2cardTypes[i];
        *Ip2Choice= P2cardNumbers[i];
        P2cardTypes[i]='z';// 'z' is showing that the card is used
        flag=0;
        break;
    }
}
if(flag){
    for(i=0;i<11;i++){
       if(p2Cards[Ibakhsh_name][i]==1){
        index=i;
        *Ip2Choice=i;
        flag=0;
        
       }
    }
    if(flag==0){
    p2Cards[Ibakhsh_name][index]=0;
    p2Choice[0]=*bakhsh_name;
    P2cardTypes[index]='z';
}
}
if(flag){
        min=P2cardNumbers[0];
        for(i=0;i<11;i++){
            if(P2cardNumbers[i]<min){
                min=P2cardNumbers[i];
               * P2Index=i;
            }
        }
        p2Choice[0]=P2cardTypes[*P2Index];
        *Ip2Choice=min;
        P2cardTypes[*P2Index]='z';
}  
  
}