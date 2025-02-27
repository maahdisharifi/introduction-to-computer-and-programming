#include "P4start.h"
void P4start(char*sign,int* Ip4Choice,char*P4cardTypes,int*P4cardNumbers,int*P4Index,char *p4Choice,int*Ibakhsh_name,char*bakhsh_name,int p4Cards[4][11]){
int True=1;
   int max;
   int i;
    int counter=0;

    for(i=0;i<11;i++){
        if(P4cardTypes[i]!='v'&&P4cardTypes[i]!=*bakhsh_name){
            if(counter==0){
            max=P4cardNumbers[i];
            counter++;
            *P4Index=i;
            }
            if(max<P4cardNumbers[i]){
                max=P4cardNumbers[i];
                *P4Index=i;
            }
        }
  }
        if(counter){
            p4Choice[0]=P4cardTypes[*P4Index];
            *sign=p4Choice[0];
            *Ip4Choice=max;
            P4cardTypes[*P4Index]='v';  
        }
   
   True=1;
if(counter==0){
    for(i=0;i<11;i++){
        if(P4cardTypes[i]!='v'){
            if(True){
                max=P4cardNumbers[i];
                *P4Index=i;
                True=0;
            }
            if(max<P4cardNumbers[i]){
                max=P4cardNumbers[i];
                *P4Index=i;
            }

        }
    }
            p4Choice[0]=P4cardTypes[*P4Index];
            *sign=p4Choice[0];
            *Ip4Choice=max;
            P4cardTypes[*P4Index]='v';
            p4Cards[*Ibakhsh_name][*P4Index]=0;
}
}