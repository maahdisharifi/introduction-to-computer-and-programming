#include "winner.h"


void winner(int *turn,char*p1Choice,char *p2Choice,char* p3Choice,char* p4Choice,int *p1Index,int* Ip2Choice,int* Ip3Choice,int* Ip4Choice,int*P1cardNumbers,char *P1cardTypes,int*Team1_points,int *Team2_points,char*bakhsh_name){
    // this function checks who wins the set and who must start a new set.
    if(*p1Choice==p2Choice[0]&&p2Choice[0]==p3Choice[0]&&p3Choice[0]==p4Choice[0]){
    if(P1cardNumbers[*p1Index]>*Ip2Choice&& P1cardNumbers[*p1Index]>*Ip3Choice&&P1cardNumbers[*p1Index]>*Ip4Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip2Choice&& *Ip2Choice> *Ip3Choice&&*Ip2Choice>*Ip4Choice){
        *turn=2;
       (*Team2_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip3Choice && *Ip3Choice>*Ip2Choice&& *Ip3Choice>*Ip4Choice){
        *turn=3;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip4Choice && *Ip4Choice>*Ip2Choice&& *Ip4Choice>*Ip3Choice){
        *turn=4;
        (*Team2_points)++;
    }
}
else if(*p1Choice==*bakhsh_name&&p2Choice[0]==*bakhsh_name&&p3Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip2Choice&& P1cardNumbers[*p1Index]>*Ip3Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip2Choice && *Ip2Choice>*Ip3Choice){
        *turn=2;
        (*Team2_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip3Choice && *Ip2Choice<*Ip3Choice){
        *turn=3;
        (*Team1_points)++;
    }
    
}
else if(*p1Choice==*bakhsh_name && p2Choice[0]==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip2Choice&& P1cardNumbers[*p1Index]>*Ip4Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip2Choice && *Ip2Choice>*Ip4Choice){
        *turn=2;
        (*Team2_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip4Choice && *Ip2Choice<*Ip4Choice){
        *turn=4;
        (*Team2_points)++;
    }
    
}
else if(*p1Choice==*bakhsh_name && p3Choice[0]==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip3Choice&& P1cardNumbers[*p1Index]>*Ip4Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip3Choice && *Ip3Choice>*Ip4Choice){
        *turn=3;
        (*Team1_points)++;
    }
    else if(P1cardNumbers[*p1Index]<*Ip4Choice && *Ip3Choice<*Ip4Choice){
        *turn=4;
        (*Team2_points)++;
    }
    
}
else if(p2Choice[0]==*bakhsh_name && p3Choice[0]==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(*Ip2Choice>*Ip3Choice&& *Ip2Choice>*Ip4Choice){
        *turn=2;
        (*Team2_points)++;
    }
    else if(*Ip2Choice<*Ip3Choice && *Ip3Choice>*Ip4Choice){
        *turn=3;
        (*Team1_points)++;
    }
    else if(*Ip2Choice<*Ip4Choice && *Ip3Choice<*Ip4Choice){
        *turn=4;
        (*Team2_points)++;
    }
    
}
else if(*p1Choice==*bakhsh_name&&p2Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip2Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else{
        *turn=2;
        (*Team2_points)++;
    }
}
else if(*p1Choice==*bakhsh_name && p3Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip3Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else{
        *turn=3;
        (*Team1_points)++;
    }
}
else if(*p1Choice==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(P1cardNumbers[*p1Index]>*Ip4Choice){
        *turn=1;
        (*Team1_points)++;
    }
    else{
        *turn=4;
        (*Team2_points)++;
    }
}
else if(p2Choice[0]==*bakhsh_name && p3Choice[0]==*bakhsh_name){
    if(*Ip2Choice>*Ip3Choice){
        *turn=2;
        (*Team2_points)++;
    }
    else{
        *turn=3;
        (*Team1_points)++;
    }
}
else if(p2Choice[0]==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(*Ip2Choice>*Ip4Choice){
        *turn=2;
        (*Team2_points)++;
    }
    else{
        *turn=4;
        (*Team2_points)++;
    }
}
else if(p3Choice[0]==*bakhsh_name && p4Choice[0]==*bakhsh_name){
    if(*Ip3Choice>*Ip4Choice){
        *turn=3;
        (*Team1_points)++;
    }
    else{
        *turn=4;
        (*Team2_points)++;
    }
}
else if(*p1Choice==*bakhsh_name){
    *turn=1;
    (*Team1_points)++;
}
else if(p2Choice[0]==*bakhsh_name){
    *turn=2;
    (*Team2_points)++;
}
else if(p3Choice[0]==*bakhsh_name){
    *turn=3;
    (*Team1_points)++;
}
else if(p4Choice[0]==*bakhsh_name){
    *turn=4;
    (*Team2_points)++;
}

else{
    if(*turn==1){
        (*Team1_points)++;
        *turn=1;
    }
   else if(*turn==2){
        (*Team2_points)++;
        *turn=2;
    }
    else if(*turn==3){
        (*Team1_points)++;
        *turn=3;
    }
   else if(*turn==4){
        (*Team2_points)++;
        *turn=4;
    }
}
}