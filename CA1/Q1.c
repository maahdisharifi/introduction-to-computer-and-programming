#include <stdio.h>

int main(){
int number,floor,roomNumber;
int NumberOfJumps =1;
float Fjump,Sjump;
scanf("%d",&number);
scanf("%f",&Fjump);
floor = number /100;
roomNumber = number % 100;
Sjump= Fjump/2;
// below we locate the trampoline'slocation 
if(roomNumber>=1 && roomNumber<=4){
    printf("%d\n",1);
}
else if(roomNumber>=5 && roomNumber<=8){
    printf("%d\n",2);
}
else if(roomNumber>=9 && roomNumber<=12){
    printf("%d\n",3);
}
else {
    printf("%d\n",4);
}
while(Sjump *NumberOfJumps + Fjump<2*floor +1){ // -> this while loop will count the number of jumps
    NumberOfJumps++;
}
printf("%d\n",NumberOfJumps);
    return 0;
}