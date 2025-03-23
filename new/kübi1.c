#include<stdio.h>
int main(){
    double absvalue;

    printf("Enter value:");

    scanf("%lf",&absvalue);

    if (absvalue>=0)
    {
        absvalue=absvalue;
        printf("Value is %.0lf",absvalue);
    }
    else if (absvalue<0)
    {
        absvalue=(-1)*absvalue;
        printf("Value is %.0lf",absvalue);

    }
   
    





    return 0;
}