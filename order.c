//order-system-c
#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#include<windows.h>


 int main(){

char item[30]="ee";
float price=0.0;
int quantity=0;
int q2=0;
int p2=0;
float total=0.0;
char add[30]="";
char item2[30]="";
int tq=0;


printf("WELCOME TO  MAISON YASMINA\n");
printf("\nHERE'S OUR MENUE:\npizza....$8\npasta....$5\nkebab....$10\ncouscous....$15\n\n");



while(strcmp(item,"pasta")!=0 && strcmp(item,"pizza")!=0&& strcmp(item,"kebab")!=0 && strcmp(item,"couscous")!=0){
printf("\nWhat would you like to order today?");
fgets(item ,sizeof(item), stdin);
item[ strlen(item) -1]= '\0';
  }



do{
 printf("How many %s would you like?",item);
scanf("%d", &quantity); 
}
while(!(quantity>0));



if(strcmp(item,"pizza")==0){
     total=quantity*8;

 } 
 else if(strcmp(item,"pasta")==0){
    total=quantity*5;
 } 
 else if(strcmp(item,"kebab")==0){
    total=quantity*10;
 }
 else if(strcmp(item,"couscous")==0){
    total=quantity*15;
 }

 for(int i=0; i<6; i++){
  
    printf("* * * * * * L O A D I N G * * * * * * \r");
     fflush(stdout); 
     Sleep(1000);
    printf(" * * * * * *L O A D I N G  * * * * * *\r"); 
     fflush(stdout); 
     Sleep(1000);

   }

//we are calc the total (with some print effect)printing two line 2 by 2


printf("\nThe TOTAL is: $%.2f\n Enjoy your %s\n",total,item);


int how;

 printf("How would you like to pay?(1.card/0.cash)");
 scanf("%d",&how);

 bool payment = (how == 1);

if(payment){
  printf("u're gonna pay with card\n");
}
else{
    printf("u're gonna pay in cash\n");
}


return 0;    }

 
/*getchar();
printf("would you like to add anything else? ");
fgets(add, sizeof(add), stdin);
add[ strlen(add) -1]= '\0';


if(strcmp(add,"yes")==0){
   
   printf("What would you like to add:");
   fgets(item2, sizeof(item2), stdin);
   item2[ strlen(item2) -1]= '\0';


   printf("What's the price for each: ");
   scanf("%d",&p2); 


   printf("How many would you like:");
   scanf("%d",&q2); 

    total=price*quantity+p2*q2;
    tq=quantity+q2;

      if(strcmp(item2,item) == 0){
     
        printf("U bought %d %s\n",tq,item);
        printf("Total is: $%.2f",total); }

     
      else{
        printf("You bought %d %s and %d %s\n",quantity,item,q2,item2);
        printf("Total is: $%.2f",total);
         }
     }
else{
   printf("You bought %d %s\n",quantity,item);
   printf("Total is: $%.2f",total);

       }*/