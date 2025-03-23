#include<stdio.h>
int main(){
    char mychar;
    printf("Enter");
    scanf("%c",&mychar);
    if (mychar>=97 && mychar<=122)
    {
        printf("This is lowercase");
    }
   
    else if(mychar>=65 && mychar<=90){

        printf("This is uppercase");
    }
    else{
        printf("This is fuckercase");
    }
    return 0;
    
}