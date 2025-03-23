#include<stdio.h>
int main(){
    int day,month,year;
    printf("Enter day:");
    scanf("%d",&day);
    printf("Enter month:");
    scanf("%d",&month);
    printf("Enter year:");
    scanf("%d",&year);
if (month==2 && day>=1 && day<=28)
{
    if(year%4==0 && month==2 && day==28)
    {
        day=29;
        printf("%d.%d.%d",day,month,year);

    }
    else if(year%4!=0 && month==2  && day==28)
    {
        day=1;
        month=month+1;
        printf("%d.%d.%d",day,month,year);
    }
}

else if(month==2 && day>28){
    printf("There is no valid day");}
   

    
   
    
    else if(day==31 && month==12){
        year=year+1;
        month=1;
        day=1;
        printf("%d.%d.%d",day,month,year);}
     else if (day==31 && month!=12)
    {
        day=1;
        month=month+1;
        printf("%d.%d.%d",day,month,year);
    }

    else if (day>=1 && day<=30)
    {
        day=day+1;
        printf("%d.%d.%d",day,month,year);
    }
    
   
        

    
    
   
    
    
    

    
    
   
    return 0;
}