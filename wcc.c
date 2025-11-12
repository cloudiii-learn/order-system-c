#include<stdio.h>
#include<string.h>

int main(){

float meter=0.0;
float inches=0.0;
int choice=0;
float kilogram=0.0;
float pounds=0.0;






printf("Welcome to The converterator\n");
printf("1. Meters to Inches\n2. Inches to Meters\n3. Kilograms to Pounds\n4. Pounds to Kilograms\n ");

printf("please enter ur choice(1/2/3/4):");
scanf("%d",&choice);


if(choice==1){
    //meter to inches
  printf(" Enter the length in meters:");
  scanf("%f",&meter); 

   inches=meter*39.3701;
   printf("%.2f meters is equal to %.2f inches",meter,inches);
   }


   switch (choice)
   {
case 2 :
    //inches to meters
    printf(" Enter the length in inches:");
    scanf("%f",&inches); 
    meter=inches/39.3701;
    printf("%.2f inches is equal to %.2f meters",inches,meter);
    break;


case 3:
    //kilograam to pound
    printf(" Enter the weight in kilogram:");
    scanf("%f",&kilogram); 

    pounds=kilogram/2.2;
    printf("%.2f kilograms is equal to %.2f pounds",kilogram,pounds);
    break;
case 4:
     //pound to kilogram
    printf(" Enter the weight in pounds:");
    scanf("%f",&pounds); 

    kilogram=2.2*pounds;
    printf("%.2f pounds is equal to %.2f kilograms",pounds,kilogram);
 default:
    printf("Invalide choice!");
    break;
 
 }
return 0;
}
