#include<stdio.h>
int main(){
    int a;

    printf("Enter a number:");

    scanf("%d",&a);

    if (a>=10 && a<=999)
    {
    

    if(a>=100 && a<=999)
    {
        printf("Number is 3 digit");
    }
    if (a>=10 && a<=100)
    {
        printf("Number is 2 digit");
    }
    
}
    else {
        printf("Neither 2 or 3 digit");
    }
    


    return 0;
}