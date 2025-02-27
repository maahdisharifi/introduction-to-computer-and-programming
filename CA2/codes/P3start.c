#include "P3start.h"
void P3start(char*sign,int* Ip3Choice,char*P3cardTypes,int*P3cardNumbers,int*P3Index,char *p3Choice,int*Ibakhsh_name,char*bakhsh_name,int p3Cards[4][11]){
    int True=1;
   int max;
   int i;
    int counter=0;
    
    for(i=0;i<11;i++){
        if(P3cardTypes[i]!='x'&&P3cardTypes[i]!=*bakhsh_name){
            if(counter==0){
            max=P3cardNumbers[i];
            counter++;
            *P3Index=i;
            }
            if(max<P3cardNumbers[i]){
                max=P3cardNumbers[i];
                *P3Index=i;
            }
        }
  }
        if(counter){
            *Ip3Choice=max;
            p3Choice[0]=P3cardTypes[*P3Index];
            *sign=p3Choice[0];
            P3cardTypes[*P3Index]='x';  
        }
   
   True=1;
if(counter==0){
    for(i=0;i<11;i++){
        if(P3cardTypes[i]!='x'){
            if(True){
                max=P3cardNumbers[i];
                *P3Index=i;
                True=0;
            }
            if(max<P3cardNumbers[i]){
                max=P3cardNumbers[i];
                *P3Index=i;
            }

        }
    }
            *Ip3Choice=max;
            p3Choice[0]=P3cardTypes[*P3Index];
            *sign=p3Choice[0];
            P3cardTypes[*P3Index]='x';
            p3Cards[*Ibakhsh_name][*P3Index]=0;
}
}