#include "P3middleofgame.h"
void P3middleofgame(char*sign,int* Ip3Choice,int p3Cards[4][11],char P3cardTypes[],char *bakhsh_name,int* P3Index,char p3Choice[],int* P3cardNumbers){
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
    if(P3cardTypes[i]==*sign){
        p3Choice[0]=P3cardTypes[i];
        *Ip3Choice= P3cardNumbers[i];
        P3cardTypes[i]='x';// 'x' is showing that the card is used
        flag=0;
        break;
    }
}
if(flag){
    for(i=0;i<11;i++){
       if(p3Cards[Ibakhsh_name][i]==1){
        index=i;
        *Ip3Choice=i;
        flag=0;     
       }
    }
    if(flag==0){
    p3Cards[Ibakhsh_name][index]=0;
    p3Choice[0]=*bakhsh_name;
    P3cardTypes[index]='x';
    }
}
if(flag){
        min=P3cardNumbers[0];
        for(i=0;i<11;i++){
            if(P3cardNumbers[i]<min){
                min=P3cardNumbers[i];
               * P3Index=i;
            }
        }
        p3Choice[0]=P3cardTypes[*P3Index];
        *Ip3Choice=min;
        P3cardTypes[*P3Index]='x';
} 
}
