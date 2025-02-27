#include "P2start.h"
void P2start(char*sign,int* Ip2Choice,char*P2cardTypes,int*P2cardNumbers,int*P2Index,char *p2Choice,int*Ibakhsh_name,char*bakhsh_name,int p2Cards[4][11]){
    int True=1;
   int max;
   int i;
    int counter=0;
    for(i=0;i<11;i++){
        if(P2cardTypes[i]!='z'&&P2cardTypes[i]!=*bakhsh_name){
            if(counter==0){
            max=P2cardNumbers[i];
            counter++;
            *P2Index=i;
            }
            if(max<P2cardNumbers[i]){
                max=P2cardNumbers[i];
                *P2Index=i;
            }
        }
  }
        if(counter){
            *Ip2Choice=max;
            p2Choice[0]=P2cardTypes[*P2Index];
            *sign=p2Choice[0];
            P2cardTypes[*P2Index]='z';
            
        }
   
   True=1;
if(counter==0){
    for(i=0;i<11;i++){
        if(P2cardTypes[i]!='z'){
            if(True){
                max=P2cardNumbers[i];
                *P2Index=i;
                True=0;
            }
            if(max<P2cardNumbers[i]){
                max=P2cardNumbers[i];
                *P2Index=i;
            }

        }
    }
            *Ip2Choice=max;
            p2Choice[0]=P2cardTypes[*P2Index];
            *sign=p2Choice[0];
            P2cardTypes[*P2Index]='z';
            p2Cards[*Ibakhsh_name][*P2Index]=0;
}
}