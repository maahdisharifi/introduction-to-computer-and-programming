#include "P4middleofgame.h"
void P4middleofgame(char*sign,int* Ip4Choice,int p4Cards[4][11],char P4cardTypes[],char *bakhsh_name,int *P4Index,char p4Choice[],int* P4cardNumbers){
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
flag=1;
for(i=0;i<11;i++){
    if(P4cardTypes[i]==*sign){
        p4Choice[0]=P4cardTypes[i];
        *Ip4Choice= P4cardNumbers[i];
        P4cardTypes[i]='v';// 'v' is showing that the card is used
        flag=0;
        break;
    }
}
if(flag){
    for(i=0;i<11;i++){
       if(p4Cards[Ibakhsh_name][i]==1){
        index=i;
        *Ip4Choice=i;
        flag=0;
        
       }
    }
    if(flag==0){
    p4Cards[Ibakhsh_name][index]=0;
    p4Choice[0]=*bakhsh_name;
    P4cardTypes[index]='v';
    }
}
if(flag){
        min=P4cardNumbers[0];
        for(i=0;i<11;i++){
            if(P4cardNumbers[i]<min){
                min=P4cardNumbers[i];
               * P4Index=i;
            }
        }
        p4Choice[0]=P4cardTypes[*P4Index];
        *Ip4Choice=min;
        P4cardTypes[*P4Index]='v';
}
}