#include <stdio.h>
int main(){
    /*char class;
    printf("Select your class:");
    scanf("%c",&class);
    
    switch (class)
    {
    case 'A':
    case 'a':
        printf("Battleship\n");
        break;
    case 'B':
    case 'b':
        printf("Cruiser\n");
        break;
    case 'C':
    case 'c':
        printf("Destroyer\n");
        break;
    case 'D':
    case 'd':
        printf("Frigate\n");
        break;
    
    default:
        printf("Unknown\n");
        break;
    }*/
   int grade;
   int attendance;
   printf("What is your grade?");
   scanf("%d",&grade);
   printf("What is your attendance?");
   scanf("%d",&attendance);
   if (grade>=60 && attendance>=8)
   {
    printf("Congratulations,You are passed");
   }
   else if (grade>=70 && attendance>=6)
   {
    printf("You passed again but I bet you are lazy!");
   }
   
   else {
    printf("You are failed");
   }
   




    return 0;
}