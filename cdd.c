
// MAD LIBS GAME
#include<stdio.h>
#include<string.h>

 int main(){

   char noun1[50]="";  
   char noun2[50]="";  
   char noun3[50]="";  
   char adj[50]="";  
   char verb[50]="";  


printf("Enter a noun(person/animal):");
fgets(noun1, sizeof(noun1), stdin);
noun1[strlen(noun1) -1] ='\0';



printf("Enter an adjective:");
fgets(adj, sizeof(adj), stdin);
adj[strlen(adj) -1] ='\0';



printf("Enter a noun(place):");
fgets(noun2, sizeof(noun2), stdin);
noun2[strlen(noun2) -1] ='\0';


printf("Enter a verb(ends with ing):");
fgets(verb, sizeof(verb), stdin);
verb[strlen(verb) -1] ='\0';



printf("Enter a noun(food):");
fgets(noun3, sizeof(noun3), stdin);
noun3[strlen(noun3) -1] ='\0';


printf("Yesterday I went to the %s, where I saw %s %s who was %s and saying, ""I want %s !""",
noun2,adj,noun1,verb,noun3);

    return 0;
 }