#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

//a program that can calculate how mcuh paint u need and the cost
//depending on your room dimensions


float len=0.0;
float height=0.0;
float width=0.0;
float area=0.0;
float bucketq=0;
float buckpr=5.99;
float total=0.0;
float paint=0.0;
char  colour[50]="";


printf("Welcome to ColorNest Store where colors breathe life into every space.\n");
printf("Please enter your room's dimensions to help us calculate how much paint you'll need.\n\n");


printf("Length:");
scanf("%f",&len);

printf("Width:");
scanf("%f",&width);

printf("Height:");
scanf("%f",&height);




getchar();
printf("What colour would you like:");
fgets(colour ,sizeof(colour), stdin);
colour[strlen(colour) -1]= '\0';




area=2*(len+width)*height;
paint=area/10;
bucketq=paint/5;
bucketq=ceil(bucketq);
total=bucketq*buckpr;



    printf("\n\nYour perfect paint match is ready!\n\n");
    printf("You'll need %.0f buckets to bring your walls to life.\n",bucketq);
    printf("Each bucket is only $%.2f !!\n",buckpr);
    printf("Paint your entire room for just $%.2f and fall in love with your space again.",total);




return 0;
}