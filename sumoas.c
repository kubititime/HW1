#include<stdio.h>
int main(){
    /*double a1,d,an,sum;
    int n;
    printf("Enter a1 :");
    scanf("%lf",&a1);
    printf("Enter d :");
    scanf("%lf",&d);
    printf("nth term:");
    scanf("%d",&n);
    an=a1+(n-1)*d;
    sum=(a1+an)*n/2;
    printf("%lf",sum);*/
    /*float num1;
    float num2;
    printf("Enter num1");
    scanf("%f",&num1);
    printf("Enter num2");
    scanf("%f",&num2);
    if (num1>num2)
    {
        printf("Num1 is max");
    }
    else if (num1==num2)
    {
        printf("They are equal,You are max");
    }
    
    else 
    {
        printf("Num2 is max");
    }*/
   int grade;
   
   
    printf("Enter grade:");
    scanf("%d",&grade);
     if(grade<=100 && grade>=0){
     if (grade>=80 && grade<=100)
    {
        printf("A");
    }
    
     if (grade>=60 && grade<80)
    {
        printf("B");
    }
     if (grade<60 && grade>=0){
        printf("C");
    }

    


}
    else
    {
            printf("Fuckk");
   }

   
   
    return 0;
   }
   
   
    
    
    
    
    

    
