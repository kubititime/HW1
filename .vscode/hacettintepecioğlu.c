#include<stdio.h>
int main(){
    double radius;
    const double pi=3.14159;
    double circumfrences;
    double AREA;
    printf("\nEnter the radius: ");
    scanf("%lf",&radius);
    circumfrences=2*radius*pi;
    AREA=pi*radius*radius;

    printf("The circumfrences is %lf\n",circumfrences);
    printf("The area is %lf",AREA);
    
    
    







    return 0;
}
