#include <stdio.h>
int main(){
int NumberOfDays,i, foodNumber;
scanf("%d",&NumberOfDays);
int foodcalories =0;
int consumedcalories = NumberOfDays *100;
for(i=0;i<NumberOfDays;i++){
    scanf("%d",&foodNumber);
// below we measure the total calories base on the user's numbers
switch(foodNumber){
    case 1:
    foodcalories+=126;
    break;
    case 2:
    foodcalories +=127;
    break;
    case 3:
    foodcalories +=61;
    break;
    case 4:
    foodcalories +=83;
    break;
    case 5:
    foodcalories+=156;
    break;
    case 6:
    foodcalories +=296;
    break;
    case 7:
    foodcalories +=496;
    break;
    case 8:
    foodcalories += 73;
    break;
    case 9:
    foodcalories +=34;
    break;
    case 10:
    foodcalories +=16;
    break;
}
}
if(consumedcalories - foodcalories>0){
    printf("laghar");
}
else if(consumedcalories - foodcalories == 0){
    printf("bedoon taghir");
}
else if(consumedcalories - foodcalories<0){
    printf("chagh");
} 
return 0;
}
