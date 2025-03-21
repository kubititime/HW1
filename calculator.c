#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;
    printf("Select an operator:");
    scanf("%c",&operator);
    printf("Enter num1:");
    scanf("%lf",&num1);
    printf("Enter num2:");
    scanf("%lf",&num2);
    switch (operator)
    {
        case '+' :
            result=num1+num2;
            printf("%.2lf",result);
        
            break;
        case '-' :
            result=num1-num2;
            printf("%.2lf",result);
            
            break;
        case '*':
            result=num1*num2;
            printf("%.2lf",result);
                
            break;
        case '/' :
            result=num1/num2;
            printf("%.2lf",result);
                    
            break;
    
        default:
            printf("This is not valid");
            break;  
    }




    return 0;
}