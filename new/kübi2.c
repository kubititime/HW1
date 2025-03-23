#include<stdio.h>
int main(){
    int month;

    printf("Enter a number:");

    scanf("%d",&month);
    
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    
    default:
        printf("There is no such month");
        break;
    }


    return 0;
}